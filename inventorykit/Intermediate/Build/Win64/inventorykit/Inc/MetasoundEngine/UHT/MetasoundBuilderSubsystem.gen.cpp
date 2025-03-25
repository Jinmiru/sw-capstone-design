// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetasoundEngine/Public/MetasoundBuilderSubsystem.h"
#include "MetasoundFrontend/Public/MetasoundFrontendDocument.h"
#include "MetasoundFrontend/Public/MetasoundFrontendDocumentBuilder.h"
#include "MetasoundFrontend/Public/MetasoundFrontendLiteral.h"
#include "Runtime/AudioExtensions/Public/AudioParameter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetasoundBuilderSubsystem() {}

// Begin Cross Module References
AUDIOEXTENSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioParameter();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundBuilderBase();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundBuilderBase_NoRegister();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundBuilderSubsystem();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundBuilderSubsystem_NoRegister();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetasoundGeneratorHandle_NoRegister();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundPatchBuilder();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundPatchBuilder_NoRegister();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundSourceBuilder();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundSourceBuilder_NoRegister();
METASOUNDENGINE_API UEnum* Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult();
METASOUNDENGINE_API UEnum* Z_Construct_UEnum_MetasoundEngine_EMetaSoundOutputAudioFormat();
METASOUNDENGINE_API UFunction* Z_Construct_UDelegateFunction_MetasoundEngine_OnCreateAuditionGeneratorHandleDelegate__DelegateSignature();
METASOUNDENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle();
METASOUNDENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle();
METASOUNDENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMetaSoundBuilderOptions();
METASOUNDENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMetaSoundNodeHandle();
METASOUNDFRONTEND_API UClass* Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendClassName();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetaSoundFrontendDocumentBuilder();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendLiteral();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendVersion();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendVertexHandle();
UPackage* Z_Construct_UPackage__Script_MetasoundEngine();
// End Cross Module References

// Begin Delegate FOnCreateAuditionGeneratorHandleDelegate
struct Z_Construct_UDelegateFunction_MetasoundEngine_OnCreateAuditionGeneratorHandleDelegate__DelegateSignature_Statics
{
	struct _Script_MetasoundEngine_eventOnCreateAuditionGeneratorHandleDelegate_Parms
	{
		UMetasoundGeneratorHandle* GeneratorHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// namespace Metasound::Engine\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "namespace Metasound::Engine" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeneratorHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MetasoundEngine_OnCreateAuditionGeneratorHandleDelegate__DelegateSignature_Statics::NewProp_GeneratorHandle = { "GeneratorHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MetasoundEngine_eventOnCreateAuditionGeneratorHandleDelegate_Parms, GeneratorHandle), Z_Construct_UClass_UMetasoundGeneratorHandle_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MetasoundEngine_OnCreateAuditionGeneratorHandleDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MetasoundEngine_OnCreateAuditionGeneratorHandleDelegate__DelegateSignature_Statics::NewProp_GeneratorHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MetasoundEngine_OnCreateAuditionGeneratorHandleDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MetasoundEngine_OnCreateAuditionGeneratorHandleDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MetasoundEngine, nullptr, "OnCreateAuditionGeneratorHandleDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MetasoundEngine_OnCreateAuditionGeneratorHandleDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MetasoundEngine_OnCreateAuditionGeneratorHandleDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MetasoundEngine_OnCreateAuditionGeneratorHandleDelegate__DelegateSignature_Statics::_Script_MetasoundEngine_eventOnCreateAuditionGeneratorHandleDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MetasoundEngine_OnCreateAuditionGeneratorHandleDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MetasoundEngine_OnCreateAuditionGeneratorHandleDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MetasoundEngine_OnCreateAuditionGeneratorHandleDelegate__DelegateSignature_Statics::_Script_MetasoundEngine_eventOnCreateAuditionGeneratorHandleDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MetasoundEngine_OnCreateAuditionGeneratorHandleDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MetasoundEngine_OnCreateAuditionGeneratorHandleDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCreateAuditionGeneratorHandleDelegate_DelegateWrapper(const FScriptDelegate& OnCreateAuditionGeneratorHandleDelegate, UMetasoundGeneratorHandle* GeneratorHandle)
{
	struct _Script_MetasoundEngine_eventOnCreateAuditionGeneratorHandleDelegate_Parms
	{
		UMetasoundGeneratorHandle* GeneratorHandle;
	};
	_Script_MetasoundEngine_eventOnCreateAuditionGeneratorHandleDelegate_Parms Parms;
	Parms.GeneratorHandle=GeneratorHandle;
	OnCreateAuditionGeneratorHandleDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnCreateAuditionGeneratorHandleDelegate

// Begin ScriptStruct FMetaSoundBuilderNodeInputHandle
static_assert(std::is_polymorphic<FMetaSoundBuilderNodeInputHandle>() == std::is_polymorphic<FMetasoundFrontendVertexHandle>(), "USTRUCT FMetaSoundBuilderNodeInputHandle cannot be polymorphic unless super FMetasoundFrontendVertexHandle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetaSoundBuilderNodeInputHandle;
class UScriptStruct* FMetaSoundBuilderNodeInputHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetaSoundBuilderNodeInputHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetaSoundBuilderNodeInputHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, (UObject*)Z_Construct_UPackage__Script_MetasoundEngine(), TEXT("MetaSoundBuilderNodeInputHandle"));
	}
	return Z_Registration_Info_UScriptStruct_MetaSoundBuilderNodeInputHandle.OuterSingleton;
}
template<> METASOUNDENGINE_API UScriptStruct* StaticStruct<FMetaSoundBuilderNodeInputHandle>()
{
	return FMetaSoundBuilderNodeInputHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "MetaSound Node Input Handle" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetaSoundBuilderNodeInputHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
	Z_Construct_UScriptStruct_FMetasoundFrontendVertexHandle,
	&NewStructOps,
	"MetaSoundBuilderNodeInputHandle",
	nullptr,
	0,
	sizeof(FMetaSoundBuilderNodeInputHandle),
	alignof(FMetaSoundBuilderNodeInputHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle()
{
	if (!Z_Registration_Info_UScriptStruct_MetaSoundBuilderNodeInputHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetaSoundBuilderNodeInputHandle.InnerSingleton, Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetaSoundBuilderNodeInputHandle.InnerSingleton;
}
// End ScriptStruct FMetaSoundBuilderNodeInputHandle

// Begin ScriptStruct FMetaSoundBuilderNodeOutputHandle
static_assert(std::is_polymorphic<FMetaSoundBuilderNodeOutputHandle>() == std::is_polymorphic<FMetasoundFrontendVertexHandle>(), "USTRUCT FMetaSoundBuilderNodeOutputHandle cannot be polymorphic unless super FMetasoundFrontendVertexHandle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetaSoundBuilderNodeOutputHandle;
class UScriptStruct* FMetaSoundBuilderNodeOutputHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetaSoundBuilderNodeOutputHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetaSoundBuilderNodeOutputHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle, (UObject*)Z_Construct_UPackage__Script_MetasoundEngine(), TEXT("MetaSoundBuilderNodeOutputHandle"));
	}
	return Z_Registration_Info_UScriptStruct_MetaSoundBuilderNodeOutputHandle.OuterSingleton;
}
template<> METASOUNDENGINE_API UScriptStruct* StaticStruct<FMetaSoundBuilderNodeOutputHandle>()
{
	return FMetaSoundBuilderNodeOutputHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "MetaSound Node Output Handle" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetaSoundBuilderNodeOutputHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
	Z_Construct_UScriptStruct_FMetasoundFrontendVertexHandle,
	&NewStructOps,
	"MetaSoundBuilderNodeOutputHandle",
	nullptr,
	0,
	sizeof(FMetaSoundBuilderNodeOutputHandle),
	alignof(FMetaSoundBuilderNodeOutputHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle()
{
	if (!Z_Registration_Info_UScriptStruct_MetaSoundBuilderNodeOutputHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetaSoundBuilderNodeOutputHandle.InnerSingleton, Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetaSoundBuilderNodeOutputHandle.InnerSingleton;
}
// End ScriptStruct FMetaSoundBuilderNodeOutputHandle

// Begin ScriptStruct FMetaSoundNodeHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetaSoundNodeHandle;
class UScriptStruct* FMetaSoundNodeHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetaSoundNodeHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetaSoundNodeHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetaSoundNodeHandle, (UObject*)Z_Construct_UPackage__Script_MetasoundEngine(), TEXT("MetaSoundNodeHandle"));
	}
	return Z_Registration_Info_UScriptStruct_MetaSoundNodeHandle.OuterSingleton;
}
template<> METASOUNDENGINE_API UScriptStruct* StaticStruct<FMetaSoundNodeHandle>()
{
	return FMetaSoundNodeHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetaSoundNodeHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeID_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetaSoundNodeHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetaSoundNodeHandle_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetaSoundNodeHandle, NodeID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeID_MetaData), NewProp_NodeID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetaSoundNodeHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaSoundNodeHandle_Statics::NewProp_NodeID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaSoundNodeHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetaSoundNodeHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
	nullptr,
	&NewStructOps,
	"MetaSoundNodeHandle",
	Z_Construct_UScriptStruct_FMetaSoundNodeHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaSoundNodeHandle_Statics::PropPointers),
	sizeof(FMetaSoundNodeHandle),
	alignof(FMetaSoundNodeHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaSoundNodeHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetaSoundNodeHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetaSoundNodeHandle()
{
	if (!Z_Registration_Info_UScriptStruct_MetaSoundNodeHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetaSoundNodeHandle.InnerSingleton, Z_Construct_UScriptStruct_FMetaSoundNodeHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetaSoundNodeHandle.InnerSingleton;
}
// End ScriptStruct FMetaSoundNodeHandle

// Begin ScriptStruct FMetaSoundBuilderOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetaSoundBuilderOptions;
class UScriptStruct* FMetaSoundBuilderOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetaSoundBuilderOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetaSoundBuilderOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetaSoundBuilderOptions, (UObject*)Z_Construct_UPackage__Script_MetasoundEngine(), TEXT("MetaSoundBuilderOptions"));
	}
	return Z_Registration_Info_UScriptStruct_MetaSoundBuilderOptions.OuterSingleton;
}
template<> METASOUNDENGINE_API UScriptStruct* StaticStruct<FMetaSoundBuilderOptions>()
{
	return FMetaSoundBuilderOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "MetaSound|Builder" },
		{ "Comment", "// Name of generated object. If object already exists, used as the base name to ensure new object is unique.\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Name of generated object. If object already exists, used as the base name to ensure new object is unique." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceUniqueClassName_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "MetaSound|Builder" },
		{ "Comment", "// If the resulting MetaSound is building over an existing document, a unique class name will be generated,\n// invalidating any referencing MetaSounds and registering the MetaSound as a new entry in the Frontend. If\n// building a new document, option is ignored.\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "If the resulting MetaSound is building over an existing document, a unique class name will be generated,\ninvalidating any referencing MetaSounds and registering the MetaSound as a new entry in the Frontend. If\nbuilding a new document, option is ignored." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddToRegistry_MetaData[] = {
		{ "Comment", "// If true, adds MetaSound to node registry, making it available\n// for reference by other dynamically created MetaSounds.\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "If true, adds MetaSound to node registry, making it available\nfor reference by other dynamically created MetaSounds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExistingMetaSound_MetaData[] = {
		{ "Comment", "// If set, builder overwrites the given MetaSound's document with the builder's copy\n// (ignores the Name field above).\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "If set, builder overwrites the given MetaSound's document with the builder's copy\n(ignores the Name field above)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static void NewProp_bForceUniqueClassName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceUniqueClassName;
	static void NewProp_bAddToRegistry_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddToRegistry;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ExistingMetaSound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetaSoundBuilderOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetaSoundBuilderOptions, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
void Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::NewProp_bForceUniqueClassName_SetBit(void* Obj)
{
	((FMetaSoundBuilderOptions*)Obj)->bForceUniqueClassName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::NewProp_bForceUniqueClassName = { "bForceUniqueClassName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMetaSoundBuilderOptions), &Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::NewProp_bForceUniqueClassName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceUniqueClassName_MetaData), NewProp_bForceUniqueClassName_MetaData) };
void Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::NewProp_bAddToRegistry_SetBit(void* Obj)
{
	((FMetaSoundBuilderOptions*)Obj)->bAddToRegistry = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::NewProp_bAddToRegistry = { "bAddToRegistry", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMetaSoundBuilderOptions), &Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::NewProp_bAddToRegistry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddToRegistry_MetaData), NewProp_bAddToRegistry_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::NewProp_ExistingMetaSound = { "ExistingMetaSound", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetaSoundBuilderOptions, ExistingMetaSound), Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExistingMetaSound_MetaData), NewProp_ExistingMetaSound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::NewProp_bForceUniqueClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::NewProp_bAddToRegistry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::NewProp_ExistingMetaSound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
	nullptr,
	&NewStructOps,
	"MetaSoundBuilderOptions",
	Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::PropPointers),
	sizeof(FMetaSoundBuilderOptions),
	alignof(FMetaSoundBuilderOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetaSoundBuilderOptions()
{
	if (!Z_Registration_Info_UScriptStruct_MetaSoundBuilderOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetaSoundBuilderOptions.InnerSingleton, Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetaSoundBuilderOptions.InnerSingleton;
}
// End ScriptStruct FMetaSoundBuilderOptions

// Begin Enum EMetaSoundBuilderResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMetaSoundBuilderResult;
static UEnum* EMetaSoundBuilderResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMetaSoundBuilderResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMetaSoundBuilderResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, (UObject*)Z_Construct_UPackage__Script_MetasoundEngine(), TEXT("EMetaSoundBuilderResult"));
	}
	return Z_Registration_Info_UEnum_EMetaSoundBuilderResult.OuterSingleton;
}
template<> METASOUNDENGINE_API UEnum* StaticEnum<EMetaSoundBuilderResult>()
{
	return EMetaSoundBuilderResult_StaticEnum();
}
struct Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Failed.Name", "EMetaSoundBuilderResult::Failed" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "Succeeded.Name", "EMetaSoundBuilderResult::Succeeded" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMetaSoundBuilderResult::Succeeded", (int64)EMetaSoundBuilderResult::Succeeded },
		{ "EMetaSoundBuilderResult::Failed", (int64)EMetaSoundBuilderResult::Failed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MetasoundEngine,
	nullptr,
	"EMetaSoundBuilderResult",
	"EMetaSoundBuilderResult",
	Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult()
{
	if (!Z_Registration_Info_UEnum_EMetaSoundBuilderResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMetaSoundBuilderResult.InnerSingleton, Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMetaSoundBuilderResult.InnerSingleton;
}
// End Enum EMetaSoundBuilderResult

// Begin Class UMetaSoundBuilderBase Function AddGraphInputNode
struct Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics
{
	struct MetaSoundBuilderBase_eventAddGraphInputNode_Parms
	{
		FName Name;
		FName DataType;
		FMetasoundFrontendLiteral DefaultValue;
		EMetaSoundBuilderResult OutResult;
		bool bIsConstructorInput;
		FMetaSoundBuilderNodeOutputHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Adds a graph input node with the given name, DataType, and sets the graph input to default value.\n// Returns the new input node's output handle if it was successfully created, or an invalid handle if it failed.\n" },
		{ "CPP_Default_bIsConstructorInput", "false" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Adds a graph input node with the given name, DataType, and sets the graph input to default value.\nReturns the new input node's output handle if it was successfully created, or an invalid handle if it failed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Output Handle" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static void NewProp_bIsConstructorInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsConstructorInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventAddGraphInputNode_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventAddGraphInputNode_Parms, DataType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventAddGraphInputNode_Parms, DefaultValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(0, nullptr) }; // 1401040219
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventAddGraphInputNode_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
void Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::NewProp_bIsConstructorInput_SetBit(void* Obj)
{
	((MetaSoundBuilderBase_eventAddGraphInputNode_Parms*)Obj)->bIsConstructorInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::NewProp_bIsConstructorInput = { "bIsConstructorInput", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderBase_eventAddGraphInputNode_Parms), &Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::NewProp_bIsConstructorInput_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventAddGraphInputNode_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1617832807
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::NewProp_bIsConstructorInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "AddGraphInputNode", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::MetaSoundBuilderBase_eventAddGraphInputNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::MetaSoundBuilderBase_eventAddGraphInputNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execAddGraphInputNode)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY(FNameProperty,Z_Param_DataType);
	P_GET_STRUCT(FMetasoundFrontendLiteral,Z_Param_DefaultValue);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_GET_UBOOL(Z_Param_bIsConstructorInput);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetaSoundBuilderNodeOutputHandle*)Z_Param__Result=P_THIS->AddGraphInputNode(Z_Param_Name,Z_Param_DataType,Z_Param_DefaultValue,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult),Z_Param_bIsConstructorInput);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function AddGraphInputNode

// Begin Class UMetaSoundBuilderBase Function AddGraphOutputNode
struct Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics
{
	struct MetaSoundBuilderBase_eventAddGraphOutputNode_Parms
	{
		FName Name;
		FName DataType;
		FMetasoundFrontendLiteral DefaultValue;
		EMetaSoundBuilderResult OutResult;
		bool bIsConstructorOutput;
		FMetaSoundBuilderNodeInputHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Adds a graph output node with the given name, DataType, and sets output node's input to default value.\n// Returns the new output node's input handle if it was successfully created, or an invalid handle if it failed.\n" },
		{ "CPP_Default_bIsConstructorOutput", "false" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Adds a graph output node with the given name, DataType, and sets output node's input to default value.\nReturns the new output node's input handle if it was successfully created, or an invalid handle if it failed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Input Handle" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static void NewProp_bIsConstructorOutput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsConstructorOutput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventAddGraphOutputNode_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventAddGraphOutputNode_Parms, DataType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventAddGraphOutputNode_Parms, DefaultValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(0, nullptr) }; // 1401040219
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventAddGraphOutputNode_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
void Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::NewProp_bIsConstructorOutput_SetBit(void* Obj)
{
	((MetaSoundBuilderBase_eventAddGraphOutputNode_Parms*)Obj)->bIsConstructorOutput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::NewProp_bIsConstructorOutput = { "bIsConstructorOutput", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderBase_eventAddGraphOutputNode_Parms), &Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::NewProp_bIsConstructorOutput_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventAddGraphOutputNode_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2511432690
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::NewProp_bIsConstructorOutput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "AddGraphOutputNode", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::MetaSoundBuilderBase_eventAddGraphOutputNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::MetaSoundBuilderBase_eventAddGraphOutputNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execAddGraphOutputNode)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY(FNameProperty,Z_Param_DataType);
	P_GET_STRUCT(FMetasoundFrontendLiteral,Z_Param_DefaultValue);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_GET_UBOOL(Z_Param_bIsConstructorOutput);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetaSoundBuilderNodeInputHandle*)Z_Param__Result=P_THIS->AddGraphOutputNode(Z_Param_Name,Z_Param_DataType,Z_Param_DefaultValue,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult),Z_Param_bIsConstructorOutput);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function AddGraphOutputNode

// Begin Class UMetaSoundBuilderBase Function AddInterface
struct Z_Construct_UFunction_UMetaSoundBuilderBase_AddInterface_Statics
{
	struct MetaSoundBuilderBase_eventAddInterface_Parms
	{
		FName InterfaceName;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Adds an interface registered with the given name to the graph, adding associated input and output nodes.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Adds an interface registered with the given name to the graph, adding associated input and output nodes." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InterfaceName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddInterface_Statics::NewProp_InterfaceName = { "InterfaceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventAddInterface_Parms, InterfaceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddInterface_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddInterface_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventAddInterface_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_AddInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddInterface_Statics::NewProp_InterfaceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddInterface_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddInterface_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_AddInterface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "AddInterface", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_AddInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_AddInterface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_AddInterface_Statics::MetaSoundBuilderBase_eventAddInterface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_AddInterface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_AddInterface_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_AddInterface_Statics::MetaSoundBuilderBase_eventAddInterface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_AddInterface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_AddInterface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execAddInterface)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InterfaceName);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddInterface(Z_Param_InterfaceName,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function AddInterface

// Begin Class UMetaSoundBuilderBase Function AddNode
struct Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode_Statics
{
	struct MetaSoundBuilderBase_eventAddNode_Parms
	{
		TScriptInterface<IMetaSoundDocumentInterface> NodeClass;
		EMetaSoundBuilderResult OutResult;
		FMetaSoundNodeHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Adds a node to the graph using the provided MetaSound asset as its defining NodeClass.\n// Returns a node handle to the created node if successful, or an invalid handle if it failed.\n" },
		{ "DisplayName", "Add MetaSound Node From Asset Class" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Adds a node to the graph using the provided MetaSound asset as its defining NodeClass.\nReturns a node handle to the created node if successful, or an invalid handle if it failed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeClass_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Node Handle" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_NodeClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode_Statics::NewProp_NodeClass = { "NodeClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventAddNode_Parms, NodeClass), Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeClass_MetaData), NewProp_NodeClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventAddNode_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventAddNode_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 4077983575
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode_Statics::NewProp_NodeClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "AddNode", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode_Statics::MetaSoundBuilderBase_eventAddNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode_Statics::MetaSoundBuilderBase_eventAddNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execAddNode)
{
	P_GET_TINTERFACE_REF(IMetaSoundDocumentInterface,Z_Param_Out_NodeClass);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetaSoundNodeHandle*)Z_Param__Result=P_THIS->AddNode(Z_Param_Out_NodeClass,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function AddNode

// Begin Class UMetaSoundBuilderBase Function AddNodeByClassName
struct Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics
{
	struct MetaSoundBuilderBase_eventAddNodeByClassName_Parms
	{
		FMetasoundFrontendClassName ClassName;
		EMetaSoundBuilderResult OutResult;
		int32 MajorVersion;
		FMetaSoundNodeHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Adds node referencing the highest native class version of the given class name to the document.\n// Returns a node handle to the created node if successful, or an invalid handle if it failed.\n" },
		{ "CPP_Default_MajorVersion", "1" },
		{ "DisplayName", "Add MetaSound Node By ClassName" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Adds node referencing the highest native class version of the given class name to the document.\nReturns a node handle to the created node if successful, or an invalid handle if it failed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Node Handle" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClassName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MajorVersion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventAddNodeByClassName_Parms, ClassName), Z_Construct_UScriptStruct_FMetasoundFrontendClassName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassName_MetaData), NewProp_ClassName_MetaData) }; // 2449018862
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventAddNodeByClassName_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::NewProp_MajorVersion = { "MajorVersion", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventAddNodeByClassName_Parms, MajorVersion), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventAddNodeByClassName_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 4077983575
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::NewProp_ClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::NewProp_MajorVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "AddNodeByClassName", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::MetaSoundBuilderBase_eventAddNodeByClassName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::MetaSoundBuilderBase_eventAddNodeByClassName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execAddNodeByClassName)
{
	P_GET_STRUCT_REF(FMetasoundFrontendClassName,Z_Param_Out_ClassName);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_GET_PROPERTY(FIntProperty,Z_Param_MajorVersion);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetaSoundNodeHandle*)Z_Param__Result=P_THIS->AddNodeByClassName(Z_Param_Out_ClassName,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult),Z_Param_MajorVersion);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function AddNodeByClassName

// Begin Class UMetaSoundBuilderBase Function ConnectNodeInputsToMatchingGraphInterfaceInputs
struct Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics
{
	struct MetaSoundBuilderBase_eventConnectNodeInputsToMatchingGraphInterfaceInputs_Parms
	{
		FMetaSoundNodeHandle NodeHandle;
		EMetaSoundBuilderResult OutResult;
		TArray<FMetaSoundBuilderNodeOutputHandle> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Connects a given node's inputs to all graph inputs for shared interfaces implemented on both the node's referenced class and the builder's MetaSound graph. Returns outputs of connected input nodes.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Connects a given node's inputs to all graph inputs for shared interfaces implemented on both the node's referenced class and the builder's MetaSound graph. Returns outputs of connected input nodes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Connected Graph Input Node Outputs" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::NewProp_NodeHandle = { "NodeHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConnectNodeInputsToMatchingGraphInterfaceInputs_Parms, NodeHandle), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeHandle_MetaData), NewProp_NodeHandle_MetaData) }; // 4077983575
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConnectNodeInputsToMatchingGraphInterfaceInputs_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle, METADATA_PARAMS(0, nullptr) }; // 1617832807
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConnectNodeInputsToMatchingGraphInterfaceInputs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1617832807
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::NewProp_NodeHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "ConnectNodeInputsToMatchingGraphInterfaceInputs", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::MetaSoundBuilderBase_eventConnectNodeInputsToMatchingGraphInterfaceInputs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::MetaSoundBuilderBase_eventConnectNodeInputsToMatchingGraphInterfaceInputs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execConnectNodeInputsToMatchingGraphInterfaceInputs)
{
	P_GET_STRUCT_REF(FMetaSoundNodeHandle,Z_Param_Out_NodeHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMetaSoundBuilderNodeOutputHandle>*)Z_Param__Result=P_THIS->ConnectNodeInputsToMatchingGraphInterfaceInputs(Z_Param_Out_NodeHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function ConnectNodeInputsToMatchingGraphInterfaceInputs

// Begin Class UMetaSoundBuilderBase Function ConnectNodeInputToGraphInput
struct Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Statics
{
	struct MetaSoundBuilderBase_eventConnectNodeInputToGraphInput_Parms
	{
		FName GraphInputName;
		FMetaSoundBuilderNodeInputHandle NodeInputHandle;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Connects a given node input to the graph input with the given name.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Connects a given node input to the graph input with the given name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeInputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_GraphInputName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeInputHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Statics::NewProp_GraphInputName = { "GraphInputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConnectNodeInputToGraphInput_Parms, GraphInputName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Statics::NewProp_NodeInputHandle = { "NodeInputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConnectNodeInputToGraphInput_Parms, NodeInputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeInputHandle_MetaData), NewProp_NodeInputHandle_MetaData) }; // 2511432690
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConnectNodeInputToGraphInput_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Statics::NewProp_GraphInputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Statics::NewProp_NodeInputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "ConnectNodeInputToGraphInput", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Statics::MetaSoundBuilderBase_eventConnectNodeInputToGraphInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Statics::MetaSoundBuilderBase_eventConnectNodeInputToGraphInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execConnectNodeInputToGraphInput)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_GraphInputName);
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeInputHandle,Z_Param_Out_NodeInputHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConnectNodeInputToGraphInput(Z_Param_GraphInputName,Z_Param_Out_NodeInputHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function ConnectNodeInputToGraphInput

// Begin Class UMetaSoundBuilderBase Function ConnectNodeOutputsToMatchingGraphInterfaceOutputs
struct Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics
{
	struct MetaSoundBuilderBase_eventConnectNodeOutputsToMatchingGraphInterfaceOutputs_Parms
	{
		FMetaSoundNodeHandle NodeHandle;
		EMetaSoundBuilderResult OutResult;
		TArray<FMetaSoundBuilderNodeInputHandle> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Connects a given node's outputs to all graph outputs for shared interfaces implemented on both the node's referenced class and the builder's MetaSound graph. Returns inputs of connected output nodes.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Connects a given node's outputs to all graph outputs for shared interfaces implemented on both the node's referenced class and the builder's MetaSound graph. Returns inputs of connected output nodes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Connected Graph Output Node Inputs" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::NewProp_NodeHandle = { "NodeHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConnectNodeOutputsToMatchingGraphInterfaceOutputs_Parms, NodeHandle), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeHandle_MetaData), NewProp_NodeHandle_MetaData) }; // 4077983575
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConnectNodeOutputsToMatchingGraphInterfaceOutputs_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(0, nullptr) }; // 2511432690
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConnectNodeOutputsToMatchingGraphInterfaceOutputs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2511432690
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::NewProp_NodeHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "ConnectNodeOutputsToMatchingGraphInterfaceOutputs", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::MetaSoundBuilderBase_eventConnectNodeOutputsToMatchingGraphInterfaceOutputs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::MetaSoundBuilderBase_eventConnectNodeOutputsToMatchingGraphInterfaceOutputs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execConnectNodeOutputsToMatchingGraphInterfaceOutputs)
{
	P_GET_STRUCT_REF(FMetaSoundNodeHandle,Z_Param_Out_NodeHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMetaSoundBuilderNodeInputHandle>*)Z_Param__Result=P_THIS->ConnectNodeOutputsToMatchingGraphInterfaceOutputs(Z_Param_Out_NodeHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function ConnectNodeOutputsToMatchingGraphInterfaceOutputs

// Begin Class UMetaSoundBuilderBase Function ConnectNodeOutputToGraphOutput
struct Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Statics
{
	struct MetaSoundBuilderBase_eventConnectNodeOutputToGraphOutput_Parms
	{
		FName GraphOutputName;
		FMetaSoundBuilderNodeOutputHandle NodeOutputHandle;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Connects a given node output to the graph output with the given name.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Connects a given node output to the graph output with the given name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeOutputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_GraphOutputName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeOutputHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Statics::NewProp_GraphOutputName = { "GraphOutputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConnectNodeOutputToGraphOutput_Parms, GraphOutputName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Statics::NewProp_NodeOutputHandle = { "NodeOutputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConnectNodeOutputToGraphOutput_Parms, NodeOutputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeOutputHandle_MetaData), NewProp_NodeOutputHandle_MetaData) }; // 1617832807
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConnectNodeOutputToGraphOutput_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Statics::NewProp_GraphOutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Statics::NewProp_NodeOutputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "ConnectNodeOutputToGraphOutput", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Statics::MetaSoundBuilderBase_eventConnectNodeOutputToGraphOutput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Statics::MetaSoundBuilderBase_eventConnectNodeOutputToGraphOutput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execConnectNodeOutputToGraphOutput)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_GraphOutputName);
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeOutputHandle,Z_Param_Out_NodeOutputHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConnectNodeOutputToGraphOutput(Z_Param_GraphOutputName,Z_Param_Out_NodeOutputHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function ConnectNodeOutputToGraphOutput

// Begin Class UMetaSoundBuilderBase Function ConnectNodes
struct Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes_Statics
{
	struct MetaSoundBuilderBase_eventConnectNodes_Parms
	{
		FMetaSoundBuilderNodeOutputHandle NodeOutputHandle;
		FMetaSoundBuilderNodeInputHandle NodeInputHandle;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Connects node output to a node input. Does *NOT* provide loop detection for performance reasons.  Loop detection is checked on class registration when built or played.\n// Returns succeeded if connection made, failed if connection already exists with input, the data types do not match, or the connection is not supported due to access type\n// incompatibility (ex. constructor input to non-constructor input).\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Connects node output to a node input. Does *NOT* provide loop detection for performance reasons.  Loop detection is checked on class registration when built or played.\nReturns succeeded if connection made, failed if connection already exists with input, the data types do not match, or the connection is not supported due to access type\nincompatibility (ex. constructor input to non-constructor input)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeOutputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeInputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeOutputHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeInputHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes_Statics::NewProp_NodeOutputHandle = { "NodeOutputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConnectNodes_Parms, NodeOutputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeOutputHandle_MetaData), NewProp_NodeOutputHandle_MetaData) }; // 1617832807
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes_Statics::NewProp_NodeInputHandle = { "NodeInputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConnectNodes_Parms, NodeInputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeInputHandle_MetaData), NewProp_NodeInputHandle_MetaData) }; // 2511432690
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConnectNodes_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes_Statics::NewProp_NodeOutputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes_Statics::NewProp_NodeInputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "ConnectNodes", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes_Statics::MetaSoundBuilderBase_eventConnectNodes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes_Statics::MetaSoundBuilderBase_eventConnectNodes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execConnectNodes)
{
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeOutputHandle,Z_Param_Out_NodeOutputHandle);
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeInputHandle,Z_Param_Out_NodeInputHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConnectNodes(Z_Param_Out_NodeOutputHandle,Z_Param_Out_NodeInputHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function ConnectNodes

// Begin Class UMetaSoundBuilderBase Function ConnectNodesByInterfaceBindings
struct Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Statics
{
	struct MetaSoundBuilderBase_eventConnectNodesByInterfaceBindings_Parms
	{
		FMetaSoundNodeHandle FromNodeHandle;
		FMetaSoundNodeHandle ToNodeHandle;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Connects two nodes using defined MetaSound Interface Bindings registered with the MetaSound Interface registry.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Connects two nodes using defined MetaSound Interface Bindings registered with the MetaSound Interface registry." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FromNodeHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToNodeHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FromNodeHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ToNodeHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Statics::NewProp_FromNodeHandle = { "FromNodeHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConnectNodesByInterfaceBindings_Parms, FromNodeHandle), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FromNodeHandle_MetaData), NewProp_FromNodeHandle_MetaData) }; // 4077983575
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Statics::NewProp_ToNodeHandle = { "ToNodeHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConnectNodesByInterfaceBindings_Parms, ToNodeHandle), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToNodeHandle_MetaData), NewProp_ToNodeHandle_MetaData) }; // 4077983575
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConnectNodesByInterfaceBindings_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Statics::NewProp_FromNodeHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Statics::NewProp_ToNodeHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "ConnectNodesByInterfaceBindings", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Statics::MetaSoundBuilderBase_eventConnectNodesByInterfaceBindings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Statics::MetaSoundBuilderBase_eventConnectNodesByInterfaceBindings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execConnectNodesByInterfaceBindings)
{
	P_GET_STRUCT_REF(FMetaSoundNodeHandle,Z_Param_Out_FromNodeHandle);
	P_GET_STRUCT_REF(FMetaSoundNodeHandle,Z_Param_Out_ToNodeHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConnectNodesByInterfaceBindings(Z_Param_Out_FromNodeHandle,Z_Param_Out_ToNodeHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function ConnectNodesByInterfaceBindings

// Begin Class UMetaSoundBuilderBase Function ContainsNode
struct Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNode_Statics
{
	struct MetaSoundBuilderBase_eventContainsNode_Parms
	{
		FMetaSoundNodeHandle Node;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns whether node exists.\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Returns whether node exists." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "IsValid" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNode_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventContainsNode_Parms, Node), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 4077983575
void Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetaSoundBuilderBase_eventContainsNode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderBase_eventContainsNode_Parms), &Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNode_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "ContainsNode", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNode_Statics::MetaSoundBuilderBase_eventContainsNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNode_Statics::MetaSoundBuilderBase_eventContainsNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execContainsNode)
{
	P_GET_STRUCT_REF(FMetaSoundNodeHandle,Z_Param_Out_Node);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ContainsNode(Z_Param_Out_Node);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function ContainsNode

// Begin Class UMetaSoundBuilderBase Function ContainsNodeInput
struct Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeInput_Statics
{
	struct MetaSoundBuilderBase_eventContainsNodeInput_Parms
	{
		FMetaSoundBuilderNodeInputHandle Input;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns whether node input exists.\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Returns whether node input exists." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "IsValid" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeInput_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventContainsNodeInput_Parms, Input), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2511432690
void Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetaSoundBuilderBase_eventContainsNodeInput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderBase_eventContainsNodeInput_Parms), &Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeInput_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "ContainsNodeInput", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeInput_Statics::MetaSoundBuilderBase_eventContainsNodeInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeInput_Statics::MetaSoundBuilderBase_eventContainsNodeInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execContainsNodeInput)
{
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeInputHandle,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ContainsNodeInput(Z_Param_Out_Input);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function ContainsNodeInput

// Begin Class UMetaSoundBuilderBase Function ContainsNodeOutput
struct Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeOutput_Statics
{
	struct MetaSoundBuilderBase_eventContainsNodeOutput_Parms
	{
		FMetaSoundBuilderNodeOutputHandle Output;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns whether node output exists.\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Returns whether node output exists." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "IsValid" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeOutput_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventContainsNodeOutput_Parms, Output), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Output_MetaData), NewProp_Output_MetaData) }; // 1617832807
void Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeOutput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetaSoundBuilderBase_eventContainsNodeOutput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeOutput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderBase_eventContainsNodeOutput_Parms), &Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeOutput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeOutput_Statics::NewProp_Output,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeOutput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeOutput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "ContainsNodeOutput", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeOutput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeOutput_Statics::MetaSoundBuilderBase_eventContainsNodeOutput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeOutput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeOutput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeOutput_Statics::MetaSoundBuilderBase_eventContainsNodeOutput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeOutput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeOutput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execContainsNodeOutput)
{
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeOutputHandle,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ContainsNodeOutput(Z_Param_Out_Output);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function ContainsNodeOutput

// Begin Class UMetaSoundBuilderBase Function ConvertFromPreset
struct Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertFromPreset_Statics
{
	struct MetaSoundBuilderBase_eventConvertFromPreset_Parms
	{
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Converts this preset to a fully accessible MetaSound; sets result to succeeded if it was converted successfully and failed if it was not.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Converts this preset to a fully accessible MetaSound; sets result to succeeded if it was converted successfully and failed if it was not." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertFromPreset_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertFromPreset_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConvertFromPreset_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertFromPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertFromPreset_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertFromPreset_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertFromPreset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertFromPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "ConvertFromPreset", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertFromPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertFromPreset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertFromPreset_Statics::MetaSoundBuilderBase_eventConvertFromPreset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertFromPreset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertFromPreset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertFromPreset_Statics::MetaSoundBuilderBase_eventConvertFromPreset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertFromPreset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertFromPreset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execConvertFromPreset)
{
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConvertFromPreset((EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function ConvertFromPreset

// Begin Class UMetaSoundBuilderBase Function ConvertToPreset
struct Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertToPreset_Statics
{
	struct MetaSoundBuilderBase_eventConvertToPreset_Parms
	{
		TScriptInterface<IMetaSoundDocumentInterface> ReferencedNodeClass;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Convert this builder to a MetaSound source preset with the given referenced source builder \n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Convert this builder to a MetaSound source preset with the given referenced source builder" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedNodeClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReferencedNodeClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertToPreset_Statics::NewProp_ReferencedNodeClass = { "ReferencedNodeClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConvertToPreset_Parms, ReferencedNodeClass), Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencedNodeClass_MetaData), NewProp_ReferencedNodeClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertToPreset_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertToPreset_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventConvertToPreset_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertToPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertToPreset_Statics::NewProp_ReferencedNodeClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertToPreset_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertToPreset_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertToPreset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertToPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "ConvertToPreset", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertToPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertToPreset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertToPreset_Statics::MetaSoundBuilderBase_eventConvertToPreset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertToPreset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertToPreset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertToPreset_Statics::MetaSoundBuilderBase_eventConvertToPreset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertToPreset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertToPreset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execConvertToPreset)
{
	P_GET_TINTERFACE_REF(IMetaSoundDocumentInterface,Z_Param_Out_ReferencedNodeClass);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConvertToPreset(Z_Param_Out_ReferencedNodeClass,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function ConvertToPreset

// Begin Class UMetaSoundBuilderBase Function DisconnectNodeInput
struct Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeInput_Statics
{
	struct MetaSoundBuilderBase_eventDisconnectNodeInput_Parms
	{
		FMetaSoundBuilderNodeInputHandle NodeInputHandle;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Removes connection to a given node input. Returns success if connection was removed, failed if not.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Removes connection to a given node input. Returns success if connection was removed, failed if not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeInputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeInputHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeInput_Statics::NewProp_NodeInputHandle = { "NodeInputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventDisconnectNodeInput_Parms, NodeInputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeInputHandle_MetaData), NewProp_NodeInputHandle_MetaData) }; // 2511432690
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeInput_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeInput_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventDisconnectNodeInput_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeInput_Statics::NewProp_NodeInputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeInput_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeInput_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "DisconnectNodeInput", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeInput_Statics::MetaSoundBuilderBase_eventDisconnectNodeInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeInput_Statics::MetaSoundBuilderBase_eventDisconnectNodeInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execDisconnectNodeInput)
{
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeInputHandle,Z_Param_Out_NodeInputHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisconnectNodeInput(Z_Param_Out_NodeInputHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function DisconnectNodeInput

// Begin Class UMetaSoundBuilderBase Function DisconnectNodeOutput
struct Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeOutput_Statics
{
	struct MetaSoundBuilderBase_eventDisconnectNodeOutput_Parms
	{
		FMetaSoundBuilderNodeOutputHandle NodeOutputHandle;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Removes all connections from a given node output. Returns success if all connections were removed, failed if not.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Removes all connections from a given node output. Returns success if all connections were removed, failed if not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeOutputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeOutputHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeOutput_Statics::NewProp_NodeOutputHandle = { "NodeOutputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventDisconnectNodeOutput_Parms, NodeOutputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeOutputHandle_MetaData), NewProp_NodeOutputHandle_MetaData) }; // 1617832807
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeOutput_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeOutput_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventDisconnectNodeOutput_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeOutput_Statics::NewProp_NodeOutputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeOutput_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeOutput_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeOutput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "DisconnectNodeOutput", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeOutput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeOutput_Statics::MetaSoundBuilderBase_eventDisconnectNodeOutput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeOutput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeOutput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeOutput_Statics::MetaSoundBuilderBase_eventDisconnectNodeOutput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeOutput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeOutput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execDisconnectNodeOutput)
{
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeOutputHandle,Z_Param_Out_NodeOutputHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisconnectNodeOutput(Z_Param_Out_NodeOutputHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function DisconnectNodeOutput

// Begin Class UMetaSoundBuilderBase Function DisconnectNodes
struct Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes_Statics
{
	struct MetaSoundBuilderBase_eventDisconnectNodes_Parms
	{
		FMetaSoundBuilderNodeOutputHandle NodeOutputHandle;
		FMetaSoundBuilderNodeInputHandle NodeInputHandle;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Disconnects node output to a node input. Returns success if connection was removed, failed if not.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Disconnects node output to a node input. Returns success if connection was removed, failed if not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeOutputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeInputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeOutputHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeInputHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes_Statics::NewProp_NodeOutputHandle = { "NodeOutputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventDisconnectNodes_Parms, NodeOutputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeOutputHandle_MetaData), NewProp_NodeOutputHandle_MetaData) }; // 1617832807
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes_Statics::NewProp_NodeInputHandle = { "NodeInputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventDisconnectNodes_Parms, NodeInputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeInputHandle_MetaData), NewProp_NodeInputHandle_MetaData) }; // 2511432690
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventDisconnectNodes_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes_Statics::NewProp_NodeOutputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes_Statics::NewProp_NodeInputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "DisconnectNodes", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes_Statics::MetaSoundBuilderBase_eventDisconnectNodes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes_Statics::MetaSoundBuilderBase_eventDisconnectNodes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execDisconnectNodes)
{
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeOutputHandle,Z_Param_Out_NodeOutputHandle);
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeInputHandle,Z_Param_Out_NodeInputHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisconnectNodes(Z_Param_Out_NodeOutputHandle,Z_Param_Out_NodeInputHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function DisconnectNodes

// Begin Class UMetaSoundBuilderBase Function DisconnectNodesByInterfaceBindings
struct Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Statics
{
	struct MetaSoundBuilderBase_eventDisconnectNodesByInterfaceBindings_Parms
	{
		FMetaSoundNodeHandle FromNodeHandle;
		FMetaSoundNodeHandle ToNodeHandle;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Disconnects two nodes using defined MetaSound Interface Bindings registered with the MetaSound Interface registry. Returns success if\n// all connections were found and removed, failed if any connections were not.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Disconnects two nodes using defined MetaSound Interface Bindings registered with the MetaSound Interface registry. Returns success if\nall connections were found and removed, failed if any connections were not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FromNodeHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToNodeHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FromNodeHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ToNodeHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Statics::NewProp_FromNodeHandle = { "FromNodeHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventDisconnectNodesByInterfaceBindings_Parms, FromNodeHandle), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FromNodeHandle_MetaData), NewProp_FromNodeHandle_MetaData) }; // 4077983575
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Statics::NewProp_ToNodeHandle = { "ToNodeHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventDisconnectNodesByInterfaceBindings_Parms, ToNodeHandle), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToNodeHandle_MetaData), NewProp_ToNodeHandle_MetaData) }; // 4077983575
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventDisconnectNodesByInterfaceBindings_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Statics::NewProp_FromNodeHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Statics::NewProp_ToNodeHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "DisconnectNodesByInterfaceBindings", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Statics::MetaSoundBuilderBase_eventDisconnectNodesByInterfaceBindings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Statics::MetaSoundBuilderBase_eventDisconnectNodesByInterfaceBindings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execDisconnectNodesByInterfaceBindings)
{
	P_GET_STRUCT_REF(FMetaSoundNodeHandle,Z_Param_Out_FromNodeHandle);
	P_GET_STRUCT_REF(FMetaSoundNodeHandle,Z_Param_Out_ToNodeHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisconnectNodesByInterfaceBindings(Z_Param_Out_FromNodeHandle,Z_Param_Out_ToNodeHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function DisconnectNodesByInterfaceBindings

// Begin Class UMetaSoundBuilderBase Function FindGraphInputNode
struct Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode_Statics
{
	struct MetaSoundBuilderBase_eventFindGraphInputNode_Parms
	{
		FName InputName;
		EMetaSoundBuilderResult OutResult;
		FMetaSoundNodeHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns graph input node by the given name if it exists, or an invalid handle if not found.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Returns graph input node by the given name if it exists, or an invalid handle if not found." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Node Handle" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindGraphInputNode_Parms, InputName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindGraphInputNode_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindGraphInputNode_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 4077983575
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode_Statics::NewProp_InputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "FindGraphInputNode", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode_Statics::MetaSoundBuilderBase_eventFindGraphInputNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode_Statics::MetaSoundBuilderBase_eventFindGraphInputNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execFindGraphInputNode)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InputName);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetaSoundNodeHandle*)Z_Param__Result=P_THIS->FindGraphInputNode(Z_Param_InputName,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function FindGraphInputNode

// Begin Class UMetaSoundBuilderBase Function FindGraphOutputNode
struct Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode_Statics
{
	struct MetaSoundBuilderBase_eventFindGraphOutputNode_Parms
	{
		FName OutputName;
		EMetaSoundBuilderResult OutResult;
		FMetaSoundNodeHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns graph output node by the given name if it exists, or an invalid handle if not found.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Returns graph output node by the given name if it exists, or an invalid handle if not found." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Node Handle" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutputName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindGraphOutputNode_Parms, OutputName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindGraphOutputNode_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindGraphOutputNode_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 4077983575
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "FindGraphOutputNode", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode_Statics::MetaSoundBuilderBase_eventFindGraphOutputNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode_Statics::MetaSoundBuilderBase_eventFindGraphOutputNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execFindGraphOutputNode)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_OutputName);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetaSoundNodeHandle*)Z_Param__Result=P_THIS->FindGraphOutputNode(Z_Param_OutputName,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function FindGraphOutputNode

// Begin Class UMetaSoundBuilderBase Function FindInterfaceInputNodes
struct Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics
{
	struct MetaSoundBuilderBase_eventFindInterfaceInputNodes_Parms
	{
		FName InterfaceName;
		EMetaSoundBuilderResult OutResult;
		TArray<FMetaSoundNodeHandle> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns input nodes associated with a given interface.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Returns input nodes associated with a given interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Input Node Handles" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InterfaceName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::NewProp_InterfaceName = { "InterfaceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindInterfaceInputNodes_Parms, InterfaceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindInterfaceInputNodes_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(0, nullptr) }; // 4077983575
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindInterfaceInputNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 4077983575
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::NewProp_InterfaceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "FindInterfaceInputNodes", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::MetaSoundBuilderBase_eventFindInterfaceInputNodes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::MetaSoundBuilderBase_eventFindInterfaceInputNodes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execFindInterfaceInputNodes)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InterfaceName);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMetaSoundNodeHandle>*)Z_Param__Result=P_THIS->FindInterfaceInputNodes(Z_Param_InterfaceName,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function FindInterfaceInputNodes

// Begin Class UMetaSoundBuilderBase Function FindInterfaceOutputNodes
struct Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics
{
	struct MetaSoundBuilderBase_eventFindInterfaceOutputNodes_Parms
	{
		FName InterfaceName;
		EMetaSoundBuilderResult OutResult;
		TArray<FMetaSoundNodeHandle> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns output nodes associated with a given interface.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Returns output nodes associated with a given interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Output Node Handles" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InterfaceName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::NewProp_InterfaceName = { "InterfaceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindInterfaceOutputNodes_Parms, InterfaceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindInterfaceOutputNodes_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(0, nullptr) }; // 4077983575
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindInterfaceOutputNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 4077983575
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::NewProp_InterfaceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "FindInterfaceOutputNodes", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::MetaSoundBuilderBase_eventFindInterfaceOutputNodes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::MetaSoundBuilderBase_eventFindInterfaceOutputNodes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execFindInterfaceOutputNodes)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InterfaceName);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMetaSoundNodeHandle>*)Z_Param__Result=P_THIS->FindInterfaceOutputNodes(Z_Param_InterfaceName,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function FindInterfaceOutputNodes

// Begin Class UMetaSoundBuilderBase Function FindNodeClassVersion
struct Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion_Statics
{
	struct MetaSoundBuilderBase_eventFindNodeClassVersion_Parms
	{
		FMetaSoundNodeHandle NodeHandle;
		EMetaSoundBuilderResult OutResult;
		FMetasoundFrontendVersion ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns output's parent node if the input is valid, otherwise returns invalid node handle.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Returns output's parent node if the input is valid, otherwise returns invalid node handle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Node ClassVersion" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion_Statics::NewProp_NodeHandle = { "NodeHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeClassVersion_Parms, NodeHandle), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeHandle_MetaData), NewProp_NodeHandle_MetaData) }; // 4077983575
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeClassVersion_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeClassVersion_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendVersion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3999094279
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion_Statics::NewProp_NodeHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "FindNodeClassVersion", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion_Statics::MetaSoundBuilderBase_eventFindNodeClassVersion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion_Statics::MetaSoundBuilderBase_eventFindNodeClassVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execFindNodeClassVersion)
{
	P_GET_STRUCT_REF(FMetaSoundNodeHandle,Z_Param_Out_NodeHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendVersion*)Z_Param__Result=P_THIS->FindNodeClassVersion(Z_Param_Out_NodeHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function FindNodeClassVersion

// Begin Class UMetaSoundBuilderBase Function FindNodeInputByName
struct Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics
{
	struct MetaSoundBuilderBase_eventFindNodeInputByName_Parms
	{
		FMetaSoundNodeHandle NodeHandle;
		FName InputName;
		EMetaSoundBuilderResult OutResult;
		FMetaSoundBuilderNodeInputHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns node input by the given name if it exists, or an invalid handle if not found.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Returns node input by the given name if it exists, or an invalid handle if not found." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Input Handle" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeHandle;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::NewProp_NodeHandle = { "NodeHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeInputByName_Parms, NodeHandle), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeHandle_MetaData), NewProp_NodeHandle_MetaData) }; // 4077983575
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeInputByName_Parms, InputName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeInputByName_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeInputByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2511432690
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::NewProp_NodeHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::NewProp_InputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "FindNodeInputByName", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::MetaSoundBuilderBase_eventFindNodeInputByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::MetaSoundBuilderBase_eventFindNodeInputByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execFindNodeInputByName)
{
	P_GET_STRUCT_REF(FMetaSoundNodeHandle,Z_Param_Out_NodeHandle);
	P_GET_PROPERTY(FNameProperty,Z_Param_InputName);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetaSoundBuilderNodeInputHandle*)Z_Param__Result=P_THIS->FindNodeInputByName(Z_Param_Out_NodeHandle,Z_Param_InputName,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function FindNodeInputByName

// Begin Class UMetaSoundBuilderBase Function FindNodeInputParent
struct Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent_Statics
{
	struct MetaSoundBuilderBase_eventFindNodeInputParent_Parms
	{
		FMetaSoundBuilderNodeInputHandle InputHandle;
		EMetaSoundBuilderResult OutResult;
		FMetaSoundNodeHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns input's parent node if the input is valid, otherwise returns invalid node handle.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Returns input's parent node if the input is valid, otherwise returns invalid node handle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Node Handle" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeInputParent_Parms, InputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputHandle_MetaData), NewProp_InputHandle_MetaData) }; // 2511432690
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeInputParent_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeInputParent_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 4077983575
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "FindNodeInputParent", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent_Statics::MetaSoundBuilderBase_eventFindNodeInputParent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent_Statics::MetaSoundBuilderBase_eventFindNodeInputParent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execFindNodeInputParent)
{
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeInputHandle,Z_Param_Out_InputHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetaSoundNodeHandle*)Z_Param__Result=P_THIS->FindNodeInputParent(Z_Param_Out_InputHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function FindNodeInputParent

// Begin Class UMetaSoundBuilderBase Function FindNodeInputs
struct Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics
{
	struct MetaSoundBuilderBase_eventFindNodeInputs_Parms
	{
		FMetaSoundNodeHandle NodeHandle;
		EMetaSoundBuilderResult OutResult;
		TArray<FMetaSoundBuilderNodeInputHandle> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns all node inputs.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Returns all node inputs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Input  Handles" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::NewProp_NodeHandle = { "NodeHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeInputs_Parms, NodeHandle), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeHandle_MetaData), NewProp_NodeHandle_MetaData) }; // 4077983575
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeInputs_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(0, nullptr) }; // 2511432690
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeInputs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2511432690
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::NewProp_NodeHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "FindNodeInputs", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::MetaSoundBuilderBase_eventFindNodeInputs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::MetaSoundBuilderBase_eventFindNodeInputs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execFindNodeInputs)
{
	P_GET_STRUCT_REF(FMetaSoundNodeHandle,Z_Param_Out_NodeHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMetaSoundBuilderNodeInputHandle>*)Z_Param__Result=P_THIS->FindNodeInputs(Z_Param_Out_NodeHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function FindNodeInputs

// Begin Class UMetaSoundBuilderBase Function FindNodeInputsByDataType
struct Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics
{
	struct MetaSoundBuilderBase_eventFindNodeInputsByDataType_Parms
	{
		FMetaSoundNodeHandle NodeHandle;
		EMetaSoundBuilderResult OutResult;
		FName DataType;
		TArray<FMetaSoundBuilderNodeInputHandle> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns node inputs by the given DataType (ex. \"Audio\", \"Trigger\", \"String\", \"Bool\", \"Float\", \"Int32\", etc.).\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Returns node inputs by the given DataType (ex. \"Audio\", \"Trigger\", \"String\", \"Bool\", \"Float\", \"Int32\", etc.)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Input Handles" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::NewProp_NodeHandle = { "NodeHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeInputsByDataType_Parms, NodeHandle), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeHandle_MetaData), NewProp_NodeHandle_MetaData) }; // 4077983575
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeInputsByDataType_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeInputsByDataType_Parms, DataType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(0, nullptr) }; // 2511432690
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeInputsByDataType_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2511432690
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::NewProp_NodeHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "FindNodeInputsByDataType", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::MetaSoundBuilderBase_eventFindNodeInputsByDataType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::MetaSoundBuilderBase_eventFindNodeInputsByDataType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execFindNodeInputsByDataType)
{
	P_GET_STRUCT_REF(FMetaSoundNodeHandle,Z_Param_Out_NodeHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_GET_PROPERTY(FNameProperty,Z_Param_DataType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMetaSoundBuilderNodeInputHandle>*)Z_Param__Result=P_THIS->FindNodeInputsByDataType(Z_Param_Out_NodeHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult),Z_Param_DataType);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function FindNodeInputsByDataType

// Begin Class UMetaSoundBuilderBase Function FindNodeOutputByName
struct Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics
{
	struct MetaSoundBuilderBase_eventFindNodeOutputByName_Parms
	{
		FMetaSoundNodeHandle NodeHandle;
		FName OutputName;
		EMetaSoundBuilderResult OutResult;
		FMetaSoundBuilderNodeOutputHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns node output by the given name.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Returns node output by the given name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Output Handle" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeHandle;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutputName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::NewProp_NodeHandle = { "NodeHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeOutputByName_Parms, NodeHandle), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeHandle_MetaData), NewProp_NodeHandle_MetaData) }; // 4077983575
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeOutputByName_Parms, OutputName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeOutputByName_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeOutputByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1617832807
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::NewProp_NodeHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "FindNodeOutputByName", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::MetaSoundBuilderBase_eventFindNodeOutputByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::MetaSoundBuilderBase_eventFindNodeOutputByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execFindNodeOutputByName)
{
	P_GET_STRUCT_REF(FMetaSoundNodeHandle,Z_Param_Out_NodeHandle);
	P_GET_PROPERTY(FNameProperty,Z_Param_OutputName);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetaSoundBuilderNodeOutputHandle*)Z_Param__Result=P_THIS->FindNodeOutputByName(Z_Param_Out_NodeHandle,Z_Param_OutputName,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function FindNodeOutputByName

// Begin Class UMetaSoundBuilderBase Function FindNodeOutputParent
struct Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent_Statics
{
	struct MetaSoundBuilderBase_eventFindNodeOutputParent_Parms
	{
		FMetaSoundBuilderNodeOutputHandle OutputHandle;
		EMetaSoundBuilderResult OutResult;
		FMetaSoundNodeHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns output's parent node if the input is valid, otherwise returns invalid node handle.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Returns output's parent node if the input is valid, otherwise returns invalid node handle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Node Handle" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent_Statics::NewProp_OutputHandle = { "OutputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeOutputParent_Parms, OutputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputHandle_MetaData), NewProp_OutputHandle_MetaData) }; // 1617832807
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeOutputParent_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeOutputParent_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 4077983575
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent_Statics::NewProp_OutputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "FindNodeOutputParent", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent_Statics::MetaSoundBuilderBase_eventFindNodeOutputParent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent_Statics::MetaSoundBuilderBase_eventFindNodeOutputParent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execFindNodeOutputParent)
{
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeOutputHandle,Z_Param_Out_OutputHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetaSoundNodeHandle*)Z_Param__Result=P_THIS->FindNodeOutputParent(Z_Param_Out_OutputHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function FindNodeOutputParent

// Begin Class UMetaSoundBuilderBase Function FindNodeOutputs
struct Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics
{
	struct MetaSoundBuilderBase_eventFindNodeOutputs_Parms
	{
		FMetaSoundNodeHandle NodeHandle;
		EMetaSoundBuilderResult OutResult;
		TArray<FMetaSoundBuilderNodeOutputHandle> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns all node outputs.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Returns all node outputs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Output Handles" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::NewProp_NodeHandle = { "NodeHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeOutputs_Parms, NodeHandle), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeHandle_MetaData), NewProp_NodeHandle_MetaData) }; // 4077983575
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeOutputs_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle, METADATA_PARAMS(0, nullptr) }; // 1617832807
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeOutputs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1617832807
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::NewProp_NodeHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "FindNodeOutputs", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::MetaSoundBuilderBase_eventFindNodeOutputs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::MetaSoundBuilderBase_eventFindNodeOutputs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execFindNodeOutputs)
{
	P_GET_STRUCT_REF(FMetaSoundNodeHandle,Z_Param_Out_NodeHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMetaSoundBuilderNodeOutputHandle>*)Z_Param__Result=P_THIS->FindNodeOutputs(Z_Param_Out_NodeHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function FindNodeOutputs

// Begin Class UMetaSoundBuilderBase Function FindNodeOutputsByDataType
struct Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics
{
	struct MetaSoundBuilderBase_eventFindNodeOutputsByDataType_Parms
	{
		FMetaSoundNodeHandle NodeHandle;
		EMetaSoundBuilderResult OutResult;
		FName DataType;
		TArray<FMetaSoundBuilderNodeOutputHandle> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns node outputs by the given DataType (ex. \"Audio\", \"Trigger\", \"String\", \"Bool\", \"Float\", \"Int32\", etc.).\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Returns node outputs by the given DataType (ex. \"Audio\", \"Trigger\", \"String\", \"Bool\", \"Float\", \"Int32\", etc.)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Output Handles" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::NewProp_NodeHandle = { "NodeHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeOutputsByDataType_Parms, NodeHandle), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeHandle_MetaData), NewProp_NodeHandle_MetaData) }; // 4077983575
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeOutputsByDataType_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeOutputsByDataType_Parms, DataType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle, METADATA_PARAMS(0, nullptr) }; // 1617832807
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventFindNodeOutputsByDataType_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1617832807
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::NewProp_NodeHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "FindNodeOutputsByDataType", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::MetaSoundBuilderBase_eventFindNodeOutputsByDataType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::MetaSoundBuilderBase_eventFindNodeOutputsByDataType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execFindNodeOutputsByDataType)
{
	P_GET_STRUCT_REF(FMetaSoundNodeHandle,Z_Param_Out_NodeHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_GET_PROPERTY(FNameProperty,Z_Param_DataType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMetaSoundBuilderNodeOutputHandle>*)Z_Param__Result=P_THIS->FindNodeOutputsByDataType(Z_Param_Out_NodeHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult),Z_Param_DataType);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function FindNodeOutputsByDataType

// Begin Class UMetaSoundBuilderBase Function GetNodeInputClassDefault
struct Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault_Statics
{
	struct MetaSoundBuilderBase_eventGetNodeInputClassDefault_Parms
	{
		FMetaSoundBuilderNodeInputHandle InputHandle;
		EMetaSoundBuilderResult OutResult;
		FMetasoundFrontendLiteral ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns node input's class literal value if set, otherwise fails and returns default literal.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Returns node input's class literal value if set, otherwise fails and returns default literal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventGetNodeInputClassDefault_Parms, InputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputHandle_MetaData), NewProp_InputHandle_MetaData) }; // 2511432690
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventGetNodeInputClassDefault_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventGetNodeInputClassDefault_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(0, nullptr) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "GetNodeInputClassDefault", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault_Statics::MetaSoundBuilderBase_eventGetNodeInputClassDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault_Statics::MetaSoundBuilderBase_eventGetNodeInputClassDefault_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execGetNodeInputClassDefault)
{
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeInputHandle,Z_Param_Out_InputHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendLiteral*)Z_Param__Result=P_THIS->GetNodeInputClassDefault(Z_Param_Out_InputHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function GetNodeInputClassDefault

// Begin Class UMetaSoundBuilderBase Function GetNodeInputData
struct Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics
{
	struct MetaSoundBuilderBase_eventGetNodeInputData_Parms
	{
		FMetaSoundBuilderNodeInputHandle InputHandle;
		FName Name;
		FName DataType;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns node input's data if valid (including things like name and datatype).\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Returns node input's data if valid (including things like name and datatype)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventGetNodeInputData_Parms, InputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputHandle_MetaData), NewProp_InputHandle_MetaData) }; // 2511432690
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventGetNodeInputData_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventGetNodeInputData_Parms, DataType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventGetNodeInputData_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "GetNodeInputData", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::MetaSoundBuilderBase_eventGetNodeInputData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::MetaSoundBuilderBase_eventGetNodeInputData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execGetNodeInputData)
{
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeInputHandle,Z_Param_Out_InputHandle);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Name);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DataType);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetNodeInputData(Z_Param_Out_InputHandle,Z_Param_Out_Name,Z_Param_Out_DataType,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function GetNodeInputData

// Begin Class UMetaSoundBuilderBase Function GetNodeInputDefault
struct Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault_Statics
{
	struct MetaSoundBuilderBase_eventGetNodeInputDefault_Parms
	{
		FMetaSoundBuilderNodeInputHandle InputHandle;
		EMetaSoundBuilderResult OutResult;
		FMetasoundFrontendLiteral ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns node input's literal value if set on graph, otherwise fails and returns default literal.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Returns node input's literal value if set on graph, otherwise fails and returns default literal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventGetNodeInputDefault_Parms, InputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputHandle_MetaData), NewProp_InputHandle_MetaData) }; // 2511432690
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventGetNodeInputDefault_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventGetNodeInputDefault_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(0, nullptr) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "GetNodeInputDefault", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault_Statics::MetaSoundBuilderBase_eventGetNodeInputDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault_Statics::MetaSoundBuilderBase_eventGetNodeInputDefault_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execGetNodeInputDefault)
{
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeInputHandle,Z_Param_Out_InputHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendLiteral*)Z_Param__Result=P_THIS->GetNodeInputDefault(Z_Param_Out_InputHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function GetNodeInputDefault

// Begin Class UMetaSoundBuilderBase Function GetNodeInputIsConstructorPin
struct Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputIsConstructorPin_Statics
{
	struct MetaSoundBuilderBase_eventGetNodeInputIsConstructorPin_Parms
	{
		FMetaSoundBuilderNodeInputHandle InputHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns whether the given node input is a constructor pin\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Returns whether the given node input is a constructor pin" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputIsConstructorPin_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventGetNodeInputIsConstructorPin_Parms, InputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputHandle_MetaData), NewProp_InputHandle_MetaData) }; // 2511432690
void Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputIsConstructorPin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetaSoundBuilderBase_eventGetNodeInputIsConstructorPin_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputIsConstructorPin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderBase_eventGetNodeInputIsConstructorPin_Parms), &Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputIsConstructorPin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputIsConstructorPin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputIsConstructorPin_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputIsConstructorPin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputIsConstructorPin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputIsConstructorPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "GetNodeInputIsConstructorPin", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputIsConstructorPin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputIsConstructorPin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputIsConstructorPin_Statics::MetaSoundBuilderBase_eventGetNodeInputIsConstructorPin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputIsConstructorPin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputIsConstructorPin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputIsConstructorPin_Statics::MetaSoundBuilderBase_eventGetNodeInputIsConstructorPin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputIsConstructorPin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputIsConstructorPin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execGetNodeInputIsConstructorPin)
{
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeInputHandle,Z_Param_Out_InputHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetNodeInputIsConstructorPin(Z_Param_Out_InputHandle);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function GetNodeInputIsConstructorPin

// Begin Class UMetaSoundBuilderBase Function GetNodeOutputData
struct Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics
{
	struct MetaSoundBuilderBase_eventGetNodeOutputData_Parms
	{
		FMetaSoundBuilderNodeOutputHandle OutputHandle;
		FName Name;
		FName DataType;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns node output's data if valid (including things like name and datatype).\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Returns node output's data if valid (including things like name and datatype)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputHandle;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::NewProp_OutputHandle = { "OutputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventGetNodeOutputData_Parms, OutputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputHandle_MetaData), NewProp_OutputHandle_MetaData) }; // 1617832807
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventGetNodeOutputData_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventGetNodeOutputData_Parms, DataType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventGetNodeOutputData_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::NewProp_OutputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "GetNodeOutputData", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::MetaSoundBuilderBase_eventGetNodeOutputData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::MetaSoundBuilderBase_eventGetNodeOutputData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execGetNodeOutputData)
{
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeOutputHandle,Z_Param_Out_OutputHandle);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Name);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DataType);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetNodeOutputData(Z_Param_Out_OutputHandle,Z_Param_Out_Name,Z_Param_Out_DataType,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function GetNodeOutputData

// Begin Class UMetaSoundBuilderBase Function GetNodeOutputIsConstructorPin
struct Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputIsConstructorPin_Statics
{
	struct MetaSoundBuilderBase_eventGetNodeOutputIsConstructorPin_Parms
	{
		FMetaSoundBuilderNodeOutputHandle OutputHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns whether the given node output is a constructor pin\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Returns whether the given node output is a constructor pin" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputIsConstructorPin_Statics::NewProp_OutputHandle = { "OutputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventGetNodeOutputIsConstructorPin_Parms, OutputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputHandle_MetaData), NewProp_OutputHandle_MetaData) }; // 1617832807
void Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputIsConstructorPin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetaSoundBuilderBase_eventGetNodeOutputIsConstructorPin_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputIsConstructorPin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderBase_eventGetNodeOutputIsConstructorPin_Parms), &Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputIsConstructorPin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputIsConstructorPin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputIsConstructorPin_Statics::NewProp_OutputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputIsConstructorPin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputIsConstructorPin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputIsConstructorPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "GetNodeOutputIsConstructorPin", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputIsConstructorPin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputIsConstructorPin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputIsConstructorPin_Statics::MetaSoundBuilderBase_eventGetNodeOutputIsConstructorPin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputIsConstructorPin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputIsConstructorPin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputIsConstructorPin_Statics::MetaSoundBuilderBase_eventGetNodeOutputIsConstructorPin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputIsConstructorPin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputIsConstructorPin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execGetNodeOutputIsConstructorPin)
{
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeOutputHandle,Z_Param_Out_OutputHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetNodeOutputIsConstructorPin(Z_Param_Out_OutputHandle);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function GetNodeOutputIsConstructorPin

// Begin Class UMetaSoundBuilderBase Function GetReferencedPresetAsset
struct Z_Construct_UFunction_UMetaSoundBuilderBase_GetReferencedPresetAsset_Statics
{
	struct MetaSoundBuilderBase_eventGetReferencedPresetAsset_Parms
	{
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Return the asset referenced by this preset builder. Returns nullptr if the builder is not a preset.\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Return the asset referenced by this preset builder. Returns nullptr if the builder is not a preset." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetReferencedPresetAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventGetReferencedPresetAsset_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_GetReferencedPresetAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_GetReferencedPresetAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetReferencedPresetAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_GetReferencedPresetAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "GetReferencedPresetAsset", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_GetReferencedPresetAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetReferencedPresetAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_GetReferencedPresetAsset_Statics::MetaSoundBuilderBase_eventGetReferencedPresetAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_GetReferencedPresetAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_GetReferencedPresetAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_GetReferencedPresetAsset_Statics::MetaSoundBuilderBase_eventGetReferencedPresetAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_GetReferencedPresetAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_GetReferencedPresetAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execGetReferencedPresetAsset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->GetReferencedPresetAsset();
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function GetReferencedPresetAsset

// Begin Class UMetaSoundBuilderBase Function InterfaceIsDeclared
struct Z_Construct_UFunction_UMetaSoundBuilderBase_InterfaceIsDeclared_Statics
{
	struct MetaSoundBuilderBase_eventInterfaceIsDeclared_Parms
	{
		FName InterfaceName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns if a given interface is declared.\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Returns if a given interface is declared." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "IsDeclared" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InterfaceName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_InterfaceIsDeclared_Statics::NewProp_InterfaceName = { "InterfaceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventInterfaceIsDeclared_Parms, InterfaceName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMetaSoundBuilderBase_InterfaceIsDeclared_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetaSoundBuilderBase_eventInterfaceIsDeclared_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_InterfaceIsDeclared_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderBase_eventInterfaceIsDeclared_Parms), &Z_Construct_UFunction_UMetaSoundBuilderBase_InterfaceIsDeclared_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_InterfaceIsDeclared_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_InterfaceIsDeclared_Statics::NewProp_InterfaceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_InterfaceIsDeclared_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_InterfaceIsDeclared_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_InterfaceIsDeclared_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "InterfaceIsDeclared", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_InterfaceIsDeclared_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_InterfaceIsDeclared_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_InterfaceIsDeclared_Statics::MetaSoundBuilderBase_eventInterfaceIsDeclared_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_InterfaceIsDeclared_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_InterfaceIsDeclared_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_InterfaceIsDeclared_Statics::MetaSoundBuilderBase_eventInterfaceIsDeclared_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_InterfaceIsDeclared()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_InterfaceIsDeclared_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execInterfaceIsDeclared)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InterfaceName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InterfaceIsDeclared(Z_Param_InterfaceName);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function InterfaceIsDeclared

// Begin Class UMetaSoundBuilderBase Function IsPreset
struct Z_Construct_UFunction_UMetaSoundBuilderBase_IsPreset_Statics
{
	struct MetaSoundBuilderBase_eventIsPreset_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns whether this is a preset.\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Returns whether this is a preset." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMetaSoundBuilderBase_IsPreset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetaSoundBuilderBase_eventIsPreset_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_IsPreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderBase_eventIsPreset_Parms), &Z_Construct_UFunction_UMetaSoundBuilderBase_IsPreset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_IsPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_IsPreset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_IsPreset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_IsPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "IsPreset", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_IsPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_IsPreset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_IsPreset_Statics::MetaSoundBuilderBase_eventIsPreset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_IsPreset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_IsPreset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_IsPreset_Statics::MetaSoundBuilderBase_eventIsPreset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_IsPreset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_IsPreset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execIsPreset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPreset();
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function IsPreset

// Begin Class UMetaSoundBuilderBase Function NodeInputIsConnected
struct Z_Construct_UFunction_UMetaSoundBuilderBase_NodeInputIsConnected_Statics
{
	struct MetaSoundBuilderBase_eventNodeInputIsConnected_Parms
	{
		FMetaSoundBuilderNodeInputHandle InputHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns if a given node input has connections.\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Returns if a given node input has connections." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Connected" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_NodeInputIsConnected_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventNodeInputIsConnected_Parms, InputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputHandle_MetaData), NewProp_InputHandle_MetaData) }; // 2511432690
void Z_Construct_UFunction_UMetaSoundBuilderBase_NodeInputIsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetaSoundBuilderBase_eventNodeInputIsConnected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_NodeInputIsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderBase_eventNodeInputIsConnected_Parms), &Z_Construct_UFunction_UMetaSoundBuilderBase_NodeInputIsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_NodeInputIsConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_NodeInputIsConnected_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_NodeInputIsConnected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_NodeInputIsConnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_NodeInputIsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "NodeInputIsConnected", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_NodeInputIsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_NodeInputIsConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_NodeInputIsConnected_Statics::MetaSoundBuilderBase_eventNodeInputIsConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_NodeInputIsConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_NodeInputIsConnected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_NodeInputIsConnected_Statics::MetaSoundBuilderBase_eventNodeInputIsConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_NodeInputIsConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_NodeInputIsConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execNodeInputIsConnected)
{
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeInputHandle,Z_Param_Out_InputHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->NodeInputIsConnected(Z_Param_Out_InputHandle);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function NodeInputIsConnected

// Begin Class UMetaSoundBuilderBase Function NodeOutputIsConnected
struct Z_Construct_UFunction_UMetaSoundBuilderBase_NodeOutputIsConnected_Statics
{
	struct MetaSoundBuilderBase_eventNodeOutputIsConnected_Parms
	{
		FMetaSoundBuilderNodeOutputHandle OutputHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns if a given node output is connected.\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Returns if a given node output is connected." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Connected" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_NodeOutputIsConnected_Statics::NewProp_OutputHandle = { "OutputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventNodeOutputIsConnected_Parms, OutputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputHandle_MetaData), NewProp_OutputHandle_MetaData) }; // 1617832807
void Z_Construct_UFunction_UMetaSoundBuilderBase_NodeOutputIsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetaSoundBuilderBase_eventNodeOutputIsConnected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_NodeOutputIsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderBase_eventNodeOutputIsConnected_Parms), &Z_Construct_UFunction_UMetaSoundBuilderBase_NodeOutputIsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_NodeOutputIsConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_NodeOutputIsConnected_Statics::NewProp_OutputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_NodeOutputIsConnected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_NodeOutputIsConnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_NodeOutputIsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "NodeOutputIsConnected", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_NodeOutputIsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_NodeOutputIsConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_NodeOutputIsConnected_Statics::MetaSoundBuilderBase_eventNodeOutputIsConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_NodeOutputIsConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_NodeOutputIsConnected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_NodeOutputIsConnected_Statics::MetaSoundBuilderBase_eventNodeOutputIsConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_NodeOutputIsConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_NodeOutputIsConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execNodeOutputIsConnected)
{
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeOutputHandle,Z_Param_Out_OutputHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->NodeOutputIsConnected(Z_Param_Out_OutputHandle);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function NodeOutputIsConnected

// Begin Class UMetaSoundBuilderBase Function NodesAreConnected
struct Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected_Statics
{
	struct MetaSoundBuilderBase_eventNodesAreConnected_Parms
	{
		FMetaSoundBuilderNodeOutputHandle OutputHandle;
		FMetaSoundBuilderNodeInputHandle InputHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns if a given node output and node input are connected.\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Returns if a given node output and node input are connected." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Connected" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected_Statics::NewProp_OutputHandle = { "OutputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventNodesAreConnected_Parms, OutputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputHandle_MetaData), NewProp_OutputHandle_MetaData) }; // 1617832807
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventNodesAreConnected_Parms, InputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputHandle_MetaData), NewProp_InputHandle_MetaData) }; // 2511432690
void Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetaSoundBuilderBase_eventNodesAreConnected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderBase_eventNodesAreConnected_Parms), &Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected_Statics::NewProp_OutputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "NodesAreConnected", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected_Statics::MetaSoundBuilderBase_eventNodesAreConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected_Statics::MetaSoundBuilderBase_eventNodesAreConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execNodesAreConnected)
{
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeOutputHandle,Z_Param_Out_OutputHandle);
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeInputHandle,Z_Param_Out_InputHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->NodesAreConnected(Z_Param_Out_OutputHandle,Z_Param_Out_InputHandle);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function NodesAreConnected

// Begin Class UMetaSoundBuilderBase Function RemoveGraphInput
struct Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphInput_Statics
{
	struct MetaSoundBuilderBase_eventRemoveGraphInput_Parms
	{
		FName Name;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Removes graph input if it exists; sets result to succeeded if it was removed and failed if it was not.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Removes graph input if it exists; sets result to succeeded if it was removed and failed if it was not." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphInput_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventRemoveGraphInput_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphInput_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphInput_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventRemoveGraphInput_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphInput_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphInput_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphInput_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "RemoveGraphInput", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphInput_Statics::MetaSoundBuilderBase_eventRemoveGraphInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphInput_Statics::MetaSoundBuilderBase_eventRemoveGraphInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execRemoveGraphInput)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveGraphInput(Z_Param_Name,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function RemoveGraphInput

// Begin Class UMetaSoundBuilderBase Function RemoveGraphOutput
struct Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphOutput_Statics
{
	struct MetaSoundBuilderBase_eventRemoveGraphOutput_Parms
	{
		FName Name;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Removes graph output if it exists; sets result to succeeded if it was removed and failed if it was not.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Removes graph output if it exists; sets result to succeeded if it was removed and failed if it was not." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphOutput_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventRemoveGraphOutput_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphOutput_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphOutput_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventRemoveGraphOutput_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphOutput_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphOutput_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphOutput_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphOutput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "RemoveGraphOutput", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphOutput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphOutput_Statics::MetaSoundBuilderBase_eventRemoveGraphOutput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphOutput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphOutput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphOutput_Statics::MetaSoundBuilderBase_eventRemoveGraphOutput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphOutput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphOutput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execRemoveGraphOutput)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveGraphOutput(Z_Param_Name,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function RemoveGraphOutput

// Begin Class UMetaSoundBuilderBase Function RemoveInterface
struct Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveInterface_Statics
{
	struct MetaSoundBuilderBase_eventRemoveInterface_Parms
	{
		FName InterfaceName;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Removes the interface with the given name from the builder's MetaSound. Removes any graph inputs\n// and outputs associated with the given interface and their respective connections (if any).\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Removes the interface with the given name from the builder's MetaSound. Removes any graph inputs\nand outputs associated with the given interface and their respective connections (if any)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InterfaceName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveInterface_Statics::NewProp_InterfaceName = { "InterfaceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventRemoveInterface_Parms, InterfaceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveInterface_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveInterface_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventRemoveInterface_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveInterface_Statics::NewProp_InterfaceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveInterface_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveInterface_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveInterface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "RemoveInterface", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveInterface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveInterface_Statics::MetaSoundBuilderBase_eventRemoveInterface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveInterface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveInterface_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveInterface_Statics::MetaSoundBuilderBase_eventRemoveInterface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveInterface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveInterface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execRemoveInterface)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InterfaceName);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveInterface(Z_Param_InterfaceName,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function RemoveInterface

// Begin Class UMetaSoundBuilderBase Function RemoveNode
struct Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode_Statics
{
	struct MetaSoundBuilderBase_eventRemoveNode_Parms
	{
		FMetaSoundNodeHandle NodeHandle;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Removes node and any associated connections from the builder's MetaSound.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Removes node and any associated connections from the builder's MetaSound." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode_Statics::NewProp_NodeHandle = { "NodeHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventRemoveNode_Parms, NodeHandle), Z_Construct_UScriptStruct_FMetaSoundNodeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeHandle_MetaData), NewProp_NodeHandle_MetaData) }; // 4077983575
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventRemoveNode_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode_Statics::NewProp_NodeHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "RemoveNode", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode_Statics::MetaSoundBuilderBase_eventRemoveNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode_Statics::MetaSoundBuilderBase_eventRemoveNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execRemoveNode)
{
	P_GET_STRUCT_REF(FMetaSoundNodeHandle,Z_Param_Out_NodeHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveNode(Z_Param_Out_NodeHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function RemoveNode

// Begin Class UMetaSoundBuilderBase Function RemoveNodeInputDefault
struct Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNodeInputDefault_Statics
{
	struct MetaSoundBuilderBase_eventRemoveNodeInputDefault_Parms
	{
		FMetaSoundBuilderNodeInputHandle InputHandle;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Removes node input literal default if set, reverting the value to be whatever the node class defaults the value to.\n// Returns success if value was removed, false if not removed (i.e. wasn't set to begin with).\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Removes node input literal default if set, reverting the value to be whatever the node class defaults the value to.\nReturns success if value was removed, false if not removed (i.e. wasn't set to begin with)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNodeInputDefault_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventRemoveNodeInputDefault_Parms, InputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputHandle_MetaData), NewProp_InputHandle_MetaData) }; // 2511432690
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNodeInputDefault_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNodeInputDefault_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventRemoveNodeInputDefault_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNodeInputDefault_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNodeInputDefault_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNodeInputDefault_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNodeInputDefault_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNodeInputDefault_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNodeInputDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "RemoveNodeInputDefault", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNodeInputDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNodeInputDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNodeInputDefault_Statics::MetaSoundBuilderBase_eventRemoveNodeInputDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNodeInputDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNodeInputDefault_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNodeInputDefault_Statics::MetaSoundBuilderBase_eventRemoveNodeInputDefault_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNodeInputDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNodeInputDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execRemoveNodeInputDefault)
{
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeInputHandle,Z_Param_Out_InputHandle);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveNodeInputDefault(Z_Param_Out_InputHandle,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function RemoveNodeInputDefault

// Begin Class UMetaSoundBuilderBase Function SetGraphInputDefault
struct Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault_Statics
{
	struct MetaSoundBuilderBase_eventSetGraphInputDefault_Parms
	{
		FName InputName;
		FMetasoundFrontendLiteral Literal;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Sets the input node's default value, overriding the default provided by the referenced graph if the graph is a preset.\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Sets the input node's default value, overriding the default provided by the referenced graph if the graph is a preset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Literal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Literal;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventSetGraphInputDefault_Parms, InputName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault_Statics::NewProp_Literal = { "Literal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventSetGraphInputDefault_Parms, Literal), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Literal_MetaData), NewProp_Literal_MetaData) }; // 1401040219
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventSetGraphInputDefault_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault_Statics::NewProp_InputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault_Statics::NewProp_Literal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "SetGraphInputDefault", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault_Statics::MetaSoundBuilderBase_eventSetGraphInputDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault_Statics::MetaSoundBuilderBase_eventSetGraphInputDefault_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execSetGraphInputDefault)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InputName);
	P_GET_STRUCT_REF(FMetasoundFrontendLiteral,Z_Param_Out_Literal);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGraphInputDefault(Z_Param_InputName,Z_Param_Out_Literal,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function SetGraphInputDefault

// Begin Class UMetaSoundBuilderBase Function SetNodeInputDefault
struct Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault_Statics
{
	struct MetaSoundBuilderBase_eventSetNodeInputDefault_Parms
	{
		FMetaSoundBuilderNodeInputHandle NodeInputHandle;
		FMetasoundFrontendLiteral Literal;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Sets the node's input default value (used if no connection to the given node input is present)\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Sets the node's input default value (used if no connection to the given node input is present)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeInputHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Literal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeInputHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Literal;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault_Statics::NewProp_NodeInputHandle = { "NodeInputHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventSetNodeInputDefault_Parms, NodeInputHandle), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeInputHandle_MetaData), NewProp_NodeInputHandle_MetaData) }; // 2511432690
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault_Statics::NewProp_Literal = { "Literal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventSetNodeInputDefault_Parms, Literal), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Literal_MetaData), NewProp_Literal_MetaData) }; // 1401040219
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderBase_eventSetNodeInputDefault_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault_Statics::NewProp_NodeInputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault_Statics::NewProp_Literal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderBase, nullptr, "SetNodeInputDefault", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault_Statics::MetaSoundBuilderBase_eventSetNodeInputDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault_Statics::MetaSoundBuilderBase_eventSetNodeInputDefault_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderBase::execSetNodeInputDefault)
{
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeInputHandle,Z_Param_Out_NodeInputHandle);
	P_GET_STRUCT_REF(FMetasoundFrontendLiteral,Z_Param_Out_Literal);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNodeInputDefault(Z_Param_Out_NodeInputHandle,Z_Param_Out_Literal,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderBase Function SetNodeInputDefault

// Begin Class UMetaSoundBuilderBase
void UMetaSoundBuilderBase::StaticRegisterNativesUMetaSoundBuilderBase()
{
	UClass* Class = UMetaSoundBuilderBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddGraphInputNode", &UMetaSoundBuilderBase::execAddGraphInputNode },
		{ "AddGraphOutputNode", &UMetaSoundBuilderBase::execAddGraphOutputNode },
		{ "AddInterface", &UMetaSoundBuilderBase::execAddInterface },
		{ "AddNode", &UMetaSoundBuilderBase::execAddNode },
		{ "AddNodeByClassName", &UMetaSoundBuilderBase::execAddNodeByClassName },
		{ "ConnectNodeInputsToMatchingGraphInterfaceInputs", &UMetaSoundBuilderBase::execConnectNodeInputsToMatchingGraphInterfaceInputs },
		{ "ConnectNodeInputToGraphInput", &UMetaSoundBuilderBase::execConnectNodeInputToGraphInput },
		{ "ConnectNodeOutputsToMatchingGraphInterfaceOutputs", &UMetaSoundBuilderBase::execConnectNodeOutputsToMatchingGraphInterfaceOutputs },
		{ "ConnectNodeOutputToGraphOutput", &UMetaSoundBuilderBase::execConnectNodeOutputToGraphOutput },
		{ "ConnectNodes", &UMetaSoundBuilderBase::execConnectNodes },
		{ "ConnectNodesByInterfaceBindings", &UMetaSoundBuilderBase::execConnectNodesByInterfaceBindings },
		{ "ContainsNode", &UMetaSoundBuilderBase::execContainsNode },
		{ "ContainsNodeInput", &UMetaSoundBuilderBase::execContainsNodeInput },
		{ "ContainsNodeOutput", &UMetaSoundBuilderBase::execContainsNodeOutput },
		{ "ConvertFromPreset", &UMetaSoundBuilderBase::execConvertFromPreset },
		{ "ConvertToPreset", &UMetaSoundBuilderBase::execConvertToPreset },
		{ "DisconnectNodeInput", &UMetaSoundBuilderBase::execDisconnectNodeInput },
		{ "DisconnectNodeOutput", &UMetaSoundBuilderBase::execDisconnectNodeOutput },
		{ "DisconnectNodes", &UMetaSoundBuilderBase::execDisconnectNodes },
		{ "DisconnectNodesByInterfaceBindings", &UMetaSoundBuilderBase::execDisconnectNodesByInterfaceBindings },
		{ "FindGraphInputNode", &UMetaSoundBuilderBase::execFindGraphInputNode },
		{ "FindGraphOutputNode", &UMetaSoundBuilderBase::execFindGraphOutputNode },
		{ "FindInterfaceInputNodes", &UMetaSoundBuilderBase::execFindInterfaceInputNodes },
		{ "FindInterfaceOutputNodes", &UMetaSoundBuilderBase::execFindInterfaceOutputNodes },
		{ "FindNodeClassVersion", &UMetaSoundBuilderBase::execFindNodeClassVersion },
		{ "FindNodeInputByName", &UMetaSoundBuilderBase::execFindNodeInputByName },
		{ "FindNodeInputParent", &UMetaSoundBuilderBase::execFindNodeInputParent },
		{ "FindNodeInputs", &UMetaSoundBuilderBase::execFindNodeInputs },
		{ "FindNodeInputsByDataType", &UMetaSoundBuilderBase::execFindNodeInputsByDataType },
		{ "FindNodeOutputByName", &UMetaSoundBuilderBase::execFindNodeOutputByName },
		{ "FindNodeOutputParent", &UMetaSoundBuilderBase::execFindNodeOutputParent },
		{ "FindNodeOutputs", &UMetaSoundBuilderBase::execFindNodeOutputs },
		{ "FindNodeOutputsByDataType", &UMetaSoundBuilderBase::execFindNodeOutputsByDataType },
		{ "GetNodeInputClassDefault", &UMetaSoundBuilderBase::execGetNodeInputClassDefault },
		{ "GetNodeInputData", &UMetaSoundBuilderBase::execGetNodeInputData },
		{ "GetNodeInputDefault", &UMetaSoundBuilderBase::execGetNodeInputDefault },
		{ "GetNodeInputIsConstructorPin", &UMetaSoundBuilderBase::execGetNodeInputIsConstructorPin },
		{ "GetNodeOutputData", &UMetaSoundBuilderBase::execGetNodeOutputData },
		{ "GetNodeOutputIsConstructorPin", &UMetaSoundBuilderBase::execGetNodeOutputIsConstructorPin },
		{ "GetReferencedPresetAsset", &UMetaSoundBuilderBase::execGetReferencedPresetAsset },
		{ "InterfaceIsDeclared", &UMetaSoundBuilderBase::execInterfaceIsDeclared },
		{ "IsPreset", &UMetaSoundBuilderBase::execIsPreset },
		{ "NodeInputIsConnected", &UMetaSoundBuilderBase::execNodeInputIsConnected },
		{ "NodeOutputIsConnected", &UMetaSoundBuilderBase::execNodeOutputIsConnected },
		{ "NodesAreConnected", &UMetaSoundBuilderBase::execNodesAreConnected },
		{ "RemoveGraphInput", &UMetaSoundBuilderBase::execRemoveGraphInput },
		{ "RemoveGraphOutput", &UMetaSoundBuilderBase::execRemoveGraphOutput },
		{ "RemoveInterface", &UMetaSoundBuilderBase::execRemoveInterface },
		{ "RemoveNode", &UMetaSoundBuilderBase::execRemoveNode },
		{ "RemoveNodeInputDefault", &UMetaSoundBuilderBase::execRemoveNodeInputDefault },
		{ "SetGraphInputDefault", &UMetaSoundBuilderBase::execSetGraphInputDefault },
		{ "SetNodeInputDefault", &UMetaSoundBuilderBase::execSetNodeInputDefault },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetaSoundBuilderBase);
UClass* Z_Construct_UClass_UMetaSoundBuilderBase_NoRegister()
{
	return UMetaSoundBuilderBase::StaticClass();
}
struct Z_Construct_UClass_UMetaSoundBuilderBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Base implementation of MetaSound builder */" },
		{ "IncludePath", "MetasoundBuilderSubsystem.h" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Base implementation of MetaSound builder" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Builder_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAttached_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "5.4 - All source builders now operate on an underlying document source document that is also used to audition." },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Builder;
#if WITH_EDITORONLY_DATA
	static void NewProp_bIsAttached_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAttached;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphInputNode, "AddGraphInputNode" }, // 3687889050
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_AddGraphOutputNode, "AddGraphOutputNode" }, // 2384641207
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_AddInterface, "AddInterface" }, // 696875133
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_AddNode, "AddNode" }, // 4161724617
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_AddNodeByClassName, "AddNodeByClassName" }, // 2691748387
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs, "ConnectNodeInputsToMatchingGraphInterfaceInputs" }, // 2786354507
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeInputToGraphInput, "ConnectNodeInputToGraphInput" }, // 1944234160
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs, "ConnectNodeOutputsToMatchingGraphInterfaceOutputs" }, // 2008974379
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput, "ConnectNodeOutputToGraphOutput" }, // 3500388573
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodes, "ConnectNodes" }, // 963548816
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings, "ConnectNodesByInterfaceBindings" }, // 332495142
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNode, "ContainsNode" }, // 4098130607
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeInput, "ContainsNodeInput" }, // 2613473410
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_ContainsNodeOutput, "ContainsNodeOutput" }, // 2711603285
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertFromPreset, "ConvertFromPreset" }, // 1908132209
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_ConvertToPreset, "ConvertToPreset" }, // 907349470
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeInput, "DisconnectNodeInput" }, // 2415180783
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodeOutput, "DisconnectNodeOutput" }, // 2303029260
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodes, "DisconnectNodes" }, // 3857769080
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings, "DisconnectNodesByInterfaceBindings" }, // 1164550629
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphInputNode, "FindGraphInputNode" }, // 1938282795
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_FindGraphOutputNode, "FindGraphOutputNode" }, // 1600118218
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceInputNodes, "FindInterfaceInputNodes" }, // 2504758179
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_FindInterfaceOutputNodes, "FindInterfaceOutputNodes" }, // 45942552
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeClassVersion, "FindNodeClassVersion" }, // 2665609982
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputByName, "FindNodeInputByName" }, // 1060292147
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputParent, "FindNodeInputParent" }, // 2032504869
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputs, "FindNodeInputs" }, // 629797676
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeInputsByDataType, "FindNodeInputsByDataType" }, // 2355512635
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputByName, "FindNodeOutputByName" }, // 2575494279
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputParent, "FindNodeOutputParent" }, // 3685942640
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputs, "FindNodeOutputs" }, // 2551299199
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_FindNodeOutputsByDataType, "FindNodeOutputsByDataType" }, // 1114358457
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputClassDefault, "GetNodeInputClassDefault" }, // 2841847646
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputData, "GetNodeInputData" }, // 4120850520
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputDefault, "GetNodeInputDefault" }, // 3484879216
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeInputIsConstructorPin, "GetNodeInputIsConstructorPin" }, // 70971331
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputData, "GetNodeOutputData" }, // 3315297786
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_GetNodeOutputIsConstructorPin, "GetNodeOutputIsConstructorPin" }, // 3974799926
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_GetReferencedPresetAsset, "GetReferencedPresetAsset" }, // 2648458615
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_InterfaceIsDeclared, "InterfaceIsDeclared" }, // 162595478
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_IsPreset, "IsPreset" }, // 126590783
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_NodeInputIsConnected, "NodeInputIsConnected" }, // 1391227850
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_NodeOutputIsConnected, "NodeOutputIsConnected" }, // 297190207
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_NodesAreConnected, "NodesAreConnected" }, // 3724958967
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphInput, "RemoveGraphInput" }, // 4045292463
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveGraphOutput, "RemoveGraphOutput" }, // 1546786350
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveInterface, "RemoveInterface" }, // 2719173215
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNode, "RemoveNode" }, // 2365117663
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_RemoveNodeInputDefault, "RemoveNodeInputDefault" }, // 2267839192
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_SetGraphInputDefault, "SetGraphInputDefault" }, // 1562232864
		{ &Z_Construct_UFunction_UMetaSoundBuilderBase_SetNodeInputDefault, "SetNodeInputDefault" }, // 2411120630
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetaSoundBuilderBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaSoundBuilderBase_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundBuilderBase, Builder), Z_Construct_UScriptStruct_FMetaSoundFrontendDocumentBuilder, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Builder_MetaData), NewProp_Builder_MetaData) }; // 2188606289
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UMetaSoundBuilderBase_Statics::NewProp_bIsAttached_SetBit(void* Obj)
{
	((UMetaSoundBuilderBase*)Obj)->bIsAttached = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMetaSoundBuilderBase_Statics::NewProp_bIsAttached = { "bIsAttached", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMetaSoundBuilderBase), &Z_Construct_UClass_UMetaSoundBuilderBase_Statics::NewProp_bIsAttached_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAttached_MetaData), NewProp_bIsAttached_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetaSoundBuilderBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundBuilderBase_Statics::NewProp_Builder,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundBuilderBase_Statics::NewProp_bIsAttached,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundBuilderBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMetaSoundBuilderBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundBuilderBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetaSoundBuilderBase_Statics::ClassParams = {
	&UMetaSoundBuilderBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMetaSoundBuilderBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundBuilderBase_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundBuilderBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMetaSoundBuilderBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMetaSoundBuilderBase()
{
	if (!Z_Registration_Info_UClass_UMetaSoundBuilderBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetaSoundBuilderBase.OuterSingleton, Z_Construct_UClass_UMetaSoundBuilderBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMetaSoundBuilderBase.OuterSingleton;
}
template<> METASOUNDENGINE_API UClass* StaticClass<UMetaSoundBuilderBase>()
{
	return UMetaSoundBuilderBase::StaticClass();
}
UMetaSoundBuilderBase::UMetaSoundBuilderBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMetaSoundBuilderBase);
UMetaSoundBuilderBase::~UMetaSoundBuilderBase() {}
// End Class UMetaSoundBuilderBase

// Begin Class UMetaSoundPatchBuilder Function Build
struct Z_Construct_UFunction_UMetaSoundPatchBuilder_Build_Statics
{
	struct MetaSoundPatchBuilder_eventBuild_Parms
	{
		UObject* Parent;
		FMetaSoundBuilderOptions Options;
		TScriptInterface<IMetaSoundDocumentInterface> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "WorldContext", "Parent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "MetaSound" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundPatchBuilder_Build_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundPatchBuilder_eventBuild_Parms, Parent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundPatchBuilder_Build_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundPatchBuilder_eventBuild_Parms, Options), Z_Construct_UScriptStruct_FMetaSoundBuilderOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) }; // 2552444882
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMetaSoundPatchBuilder_Build_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundPatchBuilder_eventBuild_Parms, ReturnValue), Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundPatchBuilder_Build_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundPatchBuilder_Build_Statics::NewProp_Parent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundPatchBuilder_Build_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundPatchBuilder_Build_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundPatchBuilder_Build_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundPatchBuilder_Build_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundPatchBuilder, nullptr, "Build", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundPatchBuilder_Build_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundPatchBuilder_Build_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundPatchBuilder_Build_Statics::MetaSoundPatchBuilder_eventBuild_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundPatchBuilder_Build_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundPatchBuilder_Build_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundPatchBuilder_Build_Statics::MetaSoundPatchBuilder_eventBuild_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundPatchBuilder_Build()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundPatchBuilder_Build_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundPatchBuilder::execBuild)
{
	P_GET_OBJECT(UObject,Z_Param_Parent);
	P_GET_STRUCT_REF(FMetaSoundBuilderOptions,Z_Param_Out_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IMetaSoundDocumentInterface>*)Z_Param__Result=P_THIS->Build(Z_Param_Parent,Z_Param_Out_Options);
	P_NATIVE_END;
}
// End Class UMetaSoundPatchBuilder Function Build

// Begin Class UMetaSoundPatchBuilder
void UMetaSoundPatchBuilder::StaticRegisterNativesUMetaSoundPatchBuilder()
{
	UClass* Class = UMetaSoundPatchBuilder::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Build", &UMetaSoundPatchBuilder::execBuild },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetaSoundPatchBuilder);
UClass* Z_Construct_UClass_UMetaSoundPatchBuilder_NoRegister()
{
	return UMetaSoundPatchBuilder::StaticClass();
}
struct Z_Construct_UClass_UMetaSoundPatchBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Builder in charge of building a MetaSound Patch */" },
		{ "IncludePath", "MetasoundBuilderSubsystem.h" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Builder in charge of building a MetaSound Patch" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMetaSoundPatchBuilder_Build, "Build" }, // 1302646846
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetaSoundPatchBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMetaSoundPatchBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMetaSoundBuilderBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundPatchBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetaSoundPatchBuilder_Statics::ClassParams = {
	&UMetaSoundPatchBuilder::StaticClass,
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
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundPatchBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UMetaSoundPatchBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMetaSoundPatchBuilder()
{
	if (!Z_Registration_Info_UClass_UMetaSoundPatchBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetaSoundPatchBuilder.OuterSingleton, Z_Construct_UClass_UMetaSoundPatchBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMetaSoundPatchBuilder.OuterSingleton;
}
template<> METASOUNDENGINE_API UClass* StaticClass<UMetaSoundPatchBuilder>()
{
	return UMetaSoundPatchBuilder::StaticClass();
}
UMetaSoundPatchBuilder::UMetaSoundPatchBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMetaSoundPatchBuilder);
UMetaSoundPatchBuilder::~UMetaSoundPatchBuilder() {}
// End Class UMetaSoundPatchBuilder

// Begin Class UMetaSoundSourceBuilder Function Audition
struct Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics
{
	struct MetaSoundSourceBuilder_eventAudition_Parms
	{
		UObject* Parent;
		UAudioComponent* AudioComponent;
		FScriptDelegate OnCreateGenerator;
		bool bLiveUpdatesEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Audio|MetaSound|Builder" },
		{ "CPP_Default_bLiveUpdatesEnabled", "false" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "WorldContext", "Parent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnCreateGenerator;
	static void NewProp_bLiveUpdatesEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLiveUpdatesEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundSourceBuilder_eventAudition_Parms, Parent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundSourceBuilder_eventAudition_Parms, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioComponent_MetaData), NewProp_AudioComponent_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::NewProp_OnCreateGenerator = { "OnCreateGenerator", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundSourceBuilder_eventAudition_Parms, OnCreateGenerator), Z_Construct_UDelegateFunction_MetasoundEngine_OnCreateAuditionGeneratorHandleDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2659177958
void Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::NewProp_bLiveUpdatesEnabled_SetBit(void* Obj)
{
	((MetaSoundSourceBuilder_eventAudition_Parms*)Obj)->bLiveUpdatesEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::NewProp_bLiveUpdatesEnabled = { "bLiveUpdatesEnabled", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundSourceBuilder_eventAudition_Parms), &Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::NewProp_bLiveUpdatesEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::NewProp_Parent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::NewProp_AudioComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::NewProp_OnCreateGenerator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::NewProp_bLiveUpdatesEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundSourceBuilder, nullptr, "Audition", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::MetaSoundSourceBuilder_eventAudition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::MetaSoundSourceBuilder_eventAudition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundSourceBuilder::execAudition)
{
	P_GET_OBJECT(UObject,Z_Param_Parent);
	P_GET_OBJECT(UAudioComponent,Z_Param_AudioComponent);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnCreateGenerator);
	P_GET_UBOOL(Z_Param_bLiveUpdatesEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Audition(Z_Param_Parent,Z_Param_AudioComponent,FOnCreateAuditionGeneratorHandleDelegate(Z_Param_OnCreateGenerator),Z_Param_bLiveUpdatesEnabled);
	P_NATIVE_END;
}
// End Class UMetaSoundSourceBuilder Function Audition

// Begin Class UMetaSoundSourceBuilder Function Build
struct Z_Construct_UFunction_UMetaSoundSourceBuilder_Build_Statics
{
	struct MetaSoundSourceBuilder_eventBuild_Parms
	{
		UObject* Parent;
		FMetaSoundBuilderOptions Options;
		TScriptInterface<IMetaSoundDocumentInterface> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "WorldContext", "Parent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "MetaSound" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundSourceBuilder_Build_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundSourceBuilder_eventBuild_Parms, Parent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundSourceBuilder_Build_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundSourceBuilder_eventBuild_Parms, Options), Z_Construct_UScriptStruct_FMetaSoundBuilderOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) }; // 2552444882
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMetaSoundSourceBuilder_Build_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundSourceBuilder_eventBuild_Parms, ReturnValue), Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundSourceBuilder_Build_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundSourceBuilder_Build_Statics::NewProp_Parent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundSourceBuilder_Build_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundSourceBuilder_Build_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_Build_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundSourceBuilder_Build_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundSourceBuilder, nullptr, "Build", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundSourceBuilder_Build_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_Build_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundSourceBuilder_Build_Statics::MetaSoundSourceBuilder_eventBuild_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_Build_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundSourceBuilder_Build_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundSourceBuilder_Build_Statics::MetaSoundSourceBuilder_eventBuild_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundSourceBuilder_Build()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundSourceBuilder_Build_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundSourceBuilder::execBuild)
{
	P_GET_OBJECT(UObject,Z_Param_Parent);
	P_GET_STRUCT_REF(FMetaSoundBuilderOptions,Z_Param_Out_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IMetaSoundDocumentInterface>*)Z_Param__Result=P_THIS->Build(Z_Param_Parent,Z_Param_Out_Options);
	P_NATIVE_END;
}
// End Class UMetaSoundSourceBuilder Function Build

// Begin Class UMetaSoundSourceBuilder Function GetLiveUpdatesEnabled
struct Z_Construct_UFunction_UMetaSoundSourceBuilder_GetLiveUpdatesEnabled_Statics
{
	struct MetaSoundSourceBuilder_eventGetLiveUpdatesEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns whether or not live updates are both globally enabled (via cvar) and are enabled on this builder's last built sound, which may or may not still be playing.\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Returns whether or not live updates are both globally enabled (via cvar) and are enabled on this builder's last built sound, which may or may not still be playing." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMetaSoundSourceBuilder_GetLiveUpdatesEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetaSoundSourceBuilder_eventGetLiveUpdatesEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundSourceBuilder_GetLiveUpdatesEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundSourceBuilder_eventGetLiveUpdatesEnabled_Parms), &Z_Construct_UFunction_UMetaSoundSourceBuilder_GetLiveUpdatesEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundSourceBuilder_GetLiveUpdatesEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundSourceBuilder_GetLiveUpdatesEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_GetLiveUpdatesEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundSourceBuilder_GetLiveUpdatesEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundSourceBuilder, nullptr, "GetLiveUpdatesEnabled", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundSourceBuilder_GetLiveUpdatesEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_GetLiveUpdatesEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundSourceBuilder_GetLiveUpdatesEnabled_Statics::MetaSoundSourceBuilder_eventGetLiveUpdatesEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_GetLiveUpdatesEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundSourceBuilder_GetLiveUpdatesEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundSourceBuilder_GetLiveUpdatesEnabled_Statics::MetaSoundSourceBuilder_eventGetLiveUpdatesEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundSourceBuilder_GetLiveUpdatesEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundSourceBuilder_GetLiveUpdatesEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundSourceBuilder::execGetLiveUpdatesEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetLiveUpdatesEnabled();
	P_NATIVE_END;
}
// End Class UMetaSoundSourceBuilder Function GetLiveUpdatesEnabled

// Begin Class UMetaSoundSourceBuilder Function SetBlockRateOverride
struct Z_Construct_UFunction_UMetaSoundSourceBuilder_SetBlockRateOverride_Statics
{
	struct MetaSoundSourceBuilder_eventSetBlockRateOverride_Parms
	{
		float BlockRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Sets the MetaSound's BlockRate override\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Sets the MetaSound's BlockRate override" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlockRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMetaSoundSourceBuilder_SetBlockRateOverride_Statics::NewProp_BlockRate = { "BlockRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundSourceBuilder_eventSetBlockRateOverride_Parms, BlockRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundSourceBuilder_SetBlockRateOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundSourceBuilder_SetBlockRateOverride_Statics::NewProp_BlockRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetBlockRateOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundSourceBuilder_SetBlockRateOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundSourceBuilder, nullptr, "SetBlockRateOverride", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundSourceBuilder_SetBlockRateOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetBlockRateOverride_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetBlockRateOverride_Statics::MetaSoundSourceBuilder_eventSetBlockRateOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetBlockRateOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundSourceBuilder_SetBlockRateOverride_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetBlockRateOverride_Statics::MetaSoundSourceBuilder_eventSetBlockRateOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundSourceBuilder_SetBlockRateOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundSourceBuilder_SetBlockRateOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundSourceBuilder::execSetBlockRateOverride)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_BlockRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBlockRateOverride(Z_Param_BlockRate);
	P_NATIVE_END;
}
// End Class UMetaSoundSourceBuilder Function SetBlockRateOverride

// Begin Class UMetaSoundSourceBuilder Function SetFormat
struct Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat_Statics
{
	struct MetaSoundSourceBuilder_eventSetFormat_Parms
	{
		EMetaSoundOutputAudioFormat OutputFormat;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Sets the output audio format of the source\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Sets the output audio format of the source" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputFormat;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat_Statics::NewProp_OutputFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat_Statics::NewProp_OutputFormat = { "OutputFormat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundSourceBuilder_eventSetFormat_Parms, OutputFormat), Z_Construct_UEnum_MetasoundEngine_EMetaSoundOutputAudioFormat, METADATA_PARAMS(0, nullptr) }; // 528543909
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundSourceBuilder_eventSetFormat_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat_Statics::NewProp_OutputFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat_Statics::NewProp_OutputFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundSourceBuilder, nullptr, "SetFormat", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat_Statics::MetaSoundSourceBuilder_eventSetFormat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat_Statics::MetaSoundSourceBuilder_eventSetFormat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundSourceBuilder::execSetFormat)
{
	P_GET_ENUM(EMetaSoundOutputAudioFormat,Z_Param_OutputFormat);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFormat(EMetaSoundOutputAudioFormat(Z_Param_OutputFormat),(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundSourceBuilder Function SetFormat

// Begin Class UMetaSoundSourceBuilder Function SetQuality
struct Z_Construct_UFunction_UMetaSoundSourceBuilder_SetQuality_Statics
{
	struct MetaSoundSourceBuilder_eventSetQuality_Parms
	{
		FName Quality;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Sets the MetaSound's Quality level\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Sets the MetaSound's Quality level" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Quality;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundSourceBuilder_SetQuality_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundSourceBuilder_eventSetQuality_Parms, Quality), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundSourceBuilder_SetQuality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundSourceBuilder_SetQuality_Statics::NewProp_Quality,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetQuality_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundSourceBuilder_SetQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundSourceBuilder, nullptr, "SetQuality", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundSourceBuilder_SetQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetQuality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetQuality_Statics::MetaSoundSourceBuilder_eventSetQuality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetQuality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundSourceBuilder_SetQuality_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetQuality_Statics::MetaSoundSourceBuilder_eventSetQuality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundSourceBuilder_SetQuality()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundSourceBuilder_SetQuality_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundSourceBuilder::execSetQuality)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Quality);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetQuality(Z_Param_Quality);
	P_NATIVE_END;
}
// End Class UMetaSoundSourceBuilder Function SetQuality

// Begin Class UMetaSoundSourceBuilder Function SetSampleRateOverride
struct Z_Construct_UFunction_UMetaSoundSourceBuilder_SetSampleRateOverride_Statics
{
	struct MetaSoundSourceBuilder_eventSetSampleRateOverride_Parms
	{
		int32 SampleRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Sets the MetaSound's SampleRate override\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Sets the MetaSound's SampleRate override" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMetaSoundSourceBuilder_SetSampleRateOverride_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundSourceBuilder_eventSetSampleRateOverride_Parms, SampleRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundSourceBuilder_SetSampleRateOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundSourceBuilder_SetSampleRateOverride_Statics::NewProp_SampleRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetSampleRateOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundSourceBuilder_SetSampleRateOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundSourceBuilder, nullptr, "SetSampleRateOverride", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundSourceBuilder_SetSampleRateOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetSampleRateOverride_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetSampleRateOverride_Statics::MetaSoundSourceBuilder_eventSetSampleRateOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetSampleRateOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundSourceBuilder_SetSampleRateOverride_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetSampleRateOverride_Statics::MetaSoundSourceBuilder_eventSetSampleRateOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundSourceBuilder_SetSampleRateOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundSourceBuilder_SetSampleRateOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundSourceBuilder::execSetSampleRateOverride)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SampleRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSampleRateOverride(Z_Param_SampleRate);
	P_NATIVE_END;
}
// End Class UMetaSoundSourceBuilder Function SetSampleRateOverride

// Begin Class UMetaSoundSourceBuilder
void UMetaSoundSourceBuilder::StaticRegisterNativesUMetaSoundSourceBuilder()
{
	UClass* Class = UMetaSoundSourceBuilder::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Audition", &UMetaSoundSourceBuilder::execAudition },
		{ "Build", &UMetaSoundSourceBuilder::execBuild },
		{ "GetLiveUpdatesEnabled", &UMetaSoundSourceBuilder::execGetLiveUpdatesEnabled },
		{ "SetBlockRateOverride", &UMetaSoundSourceBuilder::execSetBlockRateOverride },
		{ "SetFormat", &UMetaSoundSourceBuilder::execSetFormat },
		{ "SetQuality", &UMetaSoundSourceBuilder::execSetQuality },
		{ "SetSampleRateOverride", &UMetaSoundSourceBuilder::execSetSampleRateOverride },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetaSoundSourceBuilder);
UClass* Z_Construct_UClass_UMetaSoundSourceBuilder_NoRegister()
{
	return UMetaSoundSourceBuilder::StaticClass();
}
struct Z_Construct_UClass_UMetaSoundSourceBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Builder in charge of building a MetaSound Source */" },
		{ "IncludePath", "MetasoundBuilderSubsystem.h" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Builder in charge of building a MetaSound Source" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition, "Audition" }, // 432387909
		{ &Z_Construct_UFunction_UMetaSoundSourceBuilder_Build, "Build" }, // 2784603931
		{ &Z_Construct_UFunction_UMetaSoundSourceBuilder_GetLiveUpdatesEnabled, "GetLiveUpdatesEnabled" }, // 4276872320
		{ &Z_Construct_UFunction_UMetaSoundSourceBuilder_SetBlockRateOverride, "SetBlockRateOverride" }, // 4167276216
		{ &Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat, "SetFormat" }, // 3357752670
		{ &Z_Construct_UFunction_UMetaSoundSourceBuilder_SetQuality, "SetQuality" }, // 675531923
		{ &Z_Construct_UFunction_UMetaSoundSourceBuilder_SetSampleRateOverride, "SetSampleRateOverride" }, // 2622111891
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetaSoundSourceBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMetaSoundSourceBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMetaSoundBuilderBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSourceBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetaSoundSourceBuilder_Statics::ClassParams = {
	&UMetaSoundSourceBuilder::StaticClass,
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
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSourceBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UMetaSoundSourceBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMetaSoundSourceBuilder()
{
	if (!Z_Registration_Info_UClass_UMetaSoundSourceBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetaSoundSourceBuilder.OuterSingleton, Z_Construct_UClass_UMetaSoundSourceBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMetaSoundSourceBuilder.OuterSingleton;
}
template<> METASOUNDENGINE_API UClass* StaticClass<UMetaSoundSourceBuilder>()
{
	return UMetaSoundSourceBuilder::StaticClass();
}
UMetaSoundSourceBuilder::UMetaSoundSourceBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMetaSoundSourceBuilder);
UMetaSoundSourceBuilder::~UMetaSoundSourceBuilder() {}
// End Class UMetaSoundSourceBuilder

// Begin Class UMetaSoundBuilderSubsystem Function CreateBoolArrayMetaSoundLiteral
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Statics
{
	struct MetaSoundBuilderSubsystem_eventCreateBoolArrayMetaSoundLiteral_Parms
	{
		TArray<bool> Value;
		FName DataType;
		FMetasoundFrontendLiteral ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "DisplayName", "Create MetaSound Bool Array Literal" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Bool Array Literal" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateBoolArrayMetaSoundLiteral_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateBoolArrayMetaSoundLiteral_Parms, DataType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateBoolArrayMetaSoundLiteral_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "CreateBoolArrayMetaSoundLiteral", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateBoolArrayMetaSoundLiteral_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateBoolArrayMetaSoundLiteral_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execCreateBoolArrayMetaSoundLiteral)
{
	P_GET_TARRAY_REF(bool,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DataType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendLiteral*)Z_Param__Result=P_THIS->CreateBoolArrayMetaSoundLiteral(Z_Param_Out_Value,Z_Param_Out_DataType);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function CreateBoolArrayMetaSoundLiteral

// Begin Class UMetaSoundBuilderSubsystem Function CreateBoolMetaSoundLiteral
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Statics
{
	struct MetaSoundBuilderSubsystem_eventCreateBoolMetaSoundLiteral_Parms
	{
		bool Value;
		FName DataType;
		FMetasoundFrontendLiteral ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "DisplayName", "Create MetaSound Bool Literal" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Bool Literal" },
	};
#endif // WITH_METADATA
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Statics::NewProp_Value_SetBit(void* Obj)
{
	((MetaSoundBuilderSubsystem_eventCreateBoolMetaSoundLiteral_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderSubsystem_eventCreateBoolMetaSoundLiteral_Parms), &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateBoolMetaSoundLiteral_Parms, DataType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateBoolMetaSoundLiteral_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "CreateBoolMetaSoundLiteral", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateBoolMetaSoundLiteral_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateBoolMetaSoundLiteral_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execCreateBoolMetaSoundLiteral)
{
	P_GET_UBOOL(Z_Param_Value);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DataType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendLiteral*)Z_Param__Result=P_THIS->CreateBoolMetaSoundLiteral(Z_Param_Value,Z_Param_Out_DataType);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function CreateBoolMetaSoundLiteral

// Begin Class UMetaSoundBuilderSubsystem Function CreateFloatArrayMetaSoundLiteral
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Statics
{
	struct MetaSoundBuilderSubsystem_eventCreateFloatArrayMetaSoundLiteral_Parms
	{
		TArray<float> Value;
		FName DataType;
		FMetasoundFrontendLiteral ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "DisplayName", "Create MetaSound Float Array Literal" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Float Array Literal" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateFloatArrayMetaSoundLiteral_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateFloatArrayMetaSoundLiteral_Parms, DataType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateFloatArrayMetaSoundLiteral_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "CreateFloatArrayMetaSoundLiteral", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateFloatArrayMetaSoundLiteral_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateFloatArrayMetaSoundLiteral_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execCreateFloatArrayMetaSoundLiteral)
{
	P_GET_TARRAY_REF(float,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DataType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendLiteral*)Z_Param__Result=P_THIS->CreateFloatArrayMetaSoundLiteral(Z_Param_Out_Value,Z_Param_Out_DataType);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function CreateFloatArrayMetaSoundLiteral

// Begin Class UMetaSoundBuilderSubsystem Function CreateFloatMetaSoundLiteral
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral_Statics
{
	struct MetaSoundBuilderSubsystem_eventCreateFloatMetaSoundLiteral_Parms
	{
		float Value;
		FName DataType;
		FMetasoundFrontendLiteral ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "DisplayName", "Create MetaSound Float Literal" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Float Literal" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateFloatMetaSoundLiteral_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateFloatMetaSoundLiteral_Parms, DataType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateFloatMetaSoundLiteral_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "CreateFloatMetaSoundLiteral", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateFloatMetaSoundLiteral_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateFloatMetaSoundLiteral_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execCreateFloatMetaSoundLiteral)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DataType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendLiteral*)Z_Param__Result=P_THIS->CreateFloatMetaSoundLiteral(Z_Param_Value,Z_Param_Out_DataType);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function CreateFloatMetaSoundLiteral

// Begin Class UMetaSoundBuilderSubsystem Function CreateIntArrayMetaSoundLiteral
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Statics
{
	struct MetaSoundBuilderSubsystem_eventCreateIntArrayMetaSoundLiteral_Parms
	{
		TArray<int32> Value;
		FName DataType;
		FMetasoundFrontendLiteral ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "DisplayName", "Create MetaSound Int Array Literal" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Int32 Array Literal" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateIntArrayMetaSoundLiteral_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateIntArrayMetaSoundLiteral_Parms, DataType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateIntArrayMetaSoundLiteral_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "CreateIntArrayMetaSoundLiteral", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateIntArrayMetaSoundLiteral_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateIntArrayMetaSoundLiteral_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execCreateIntArrayMetaSoundLiteral)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DataType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendLiteral*)Z_Param__Result=P_THIS->CreateIntArrayMetaSoundLiteral(Z_Param_Out_Value,Z_Param_Out_DataType);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function CreateIntArrayMetaSoundLiteral

// Begin Class UMetaSoundBuilderSubsystem Function CreateIntMetaSoundLiteral
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral_Statics
{
	struct MetaSoundBuilderSubsystem_eventCreateIntMetaSoundLiteral_Parms
	{
		int32 Value;
		FName DataType;
		FMetasoundFrontendLiteral ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "DisplayName", "Create MetaSound Int Literal" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Int32 Literal" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateIntMetaSoundLiteral_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateIntMetaSoundLiteral_Parms, DataType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateIntMetaSoundLiteral_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "CreateIntMetaSoundLiteral", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateIntMetaSoundLiteral_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateIntMetaSoundLiteral_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execCreateIntMetaSoundLiteral)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DataType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendLiteral*)Z_Param__Result=P_THIS->CreateIntMetaSoundLiteral(Z_Param_Value,Z_Param_Out_DataType);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function CreateIntMetaSoundLiteral

// Begin Class UMetaSoundBuilderSubsystem Function CreateMetaSoundLiteralFromParam
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam_Statics
{
	struct MetaSoundBuilderSubsystem_eventCreateMetaSoundLiteralFromParam_Parms
	{
		FAudioParameter Param;
		FMetasoundFrontendLiteral ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "DisplayName", "Create MetaSound Literal From AudioParameter" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Param_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Param Literal" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Param;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateMetaSoundLiteralFromParam_Parms, Param), Z_Construct_UScriptStruct_FAudioParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Param_MetaData), NewProp_Param_MetaData) }; // 2092353974
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateMetaSoundLiteralFromParam_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam_Statics::NewProp_Param,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "CreateMetaSoundLiteralFromParam", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam_Statics::MetaSoundBuilderSubsystem_eventCreateMetaSoundLiteralFromParam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam_Statics::MetaSoundBuilderSubsystem_eventCreateMetaSoundLiteralFromParam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execCreateMetaSoundLiteralFromParam)
{
	P_GET_STRUCT_REF(FAudioParameter,Z_Param_Out_Param);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendLiteral*)Z_Param__Result=P_THIS->CreateMetaSoundLiteralFromParam(Z_Param_Out_Param);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function CreateMetaSoundLiteralFromParam

// Begin Class UMetaSoundBuilderSubsystem Function CreateObjectArrayMetaSoundLiteral
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral_Statics
{
	struct MetaSoundBuilderSubsystem_eventCreateObjectArrayMetaSoundLiteral_Parms
	{
		TArray<UObject*> Value;
		FMetasoundFrontendLiteral ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "DisplayName", "Create MetaSound Object Array Literal" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Object Array Literal" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateObjectArrayMetaSoundLiteral_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateObjectArrayMetaSoundLiteral_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "CreateObjectArrayMetaSoundLiteral", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateObjectArrayMetaSoundLiteral_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateObjectArrayMetaSoundLiteral_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execCreateObjectArrayMetaSoundLiteral)
{
	P_GET_TARRAY_REF(UObject*,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendLiteral*)Z_Param__Result=P_THIS->CreateObjectArrayMetaSoundLiteral(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function CreateObjectArrayMetaSoundLiteral

// Begin Class UMetaSoundBuilderSubsystem Function CreateObjectMetaSoundLiteral
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral_Statics
{
	struct MetaSoundBuilderSubsystem_eventCreateObjectMetaSoundLiteral_Parms
	{
		UObject* Value;
		FMetasoundFrontendLiteral ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "DisplayName", "Create MetaSound Object Literal" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Object Literal" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateObjectMetaSoundLiteral_Parms, Value), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateObjectMetaSoundLiteral_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "CreateObjectMetaSoundLiteral", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateObjectMetaSoundLiteral_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateObjectMetaSoundLiteral_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execCreateObjectMetaSoundLiteral)
{
	P_GET_OBJECT(UObject,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendLiteral*)Z_Param__Result=P_THIS->CreateObjectMetaSoundLiteral(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function CreateObjectMetaSoundLiteral

// Begin Class UMetaSoundBuilderSubsystem Function CreatePatchBuilder
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder_Statics
{
	struct MetaSoundBuilderSubsystem_eventCreatePatchBuilder_Parms
	{
		FName BuilderName;
		EMetaSoundBuilderResult OutResult;
		UMetaSoundPatchBuilder* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Patch Builder" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BuilderName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder_Statics::NewProp_BuilderName = { "BuilderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreatePatchBuilder_Parms, BuilderName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreatePatchBuilder_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreatePatchBuilder_Parms, ReturnValue), Z_Construct_UClass_UMetaSoundPatchBuilder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder_Statics::NewProp_BuilderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "CreatePatchBuilder", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder_Statics::MetaSoundBuilderSubsystem_eventCreatePatchBuilder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder_Statics::MetaSoundBuilderSubsystem_eventCreatePatchBuilder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execCreatePatchBuilder)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BuilderName);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMetaSoundPatchBuilder**)Z_Param__Result=P_THIS->CreatePatchBuilder(Z_Param_BuilderName,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function CreatePatchBuilder

// Begin Class UMetaSoundBuilderSubsystem Function CreatePatchPresetBuilder
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics
{
	struct MetaSoundBuilderSubsystem_eventCreatePatchPresetBuilder_Parms
	{
		FName BuilderName;
		TScriptInterface<IMetaSoundDocumentInterface> ReferencedPatchClass;
		EMetaSoundBuilderResult OutResult;
		UMetaSoundPatchBuilder* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedPatchClass_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Patch Preset Builder" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BuilderName;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReferencedPatchClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::NewProp_BuilderName = { "BuilderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreatePatchPresetBuilder_Parms, BuilderName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::NewProp_ReferencedPatchClass = { "ReferencedPatchClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreatePatchPresetBuilder_Parms, ReferencedPatchClass), Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencedPatchClass_MetaData), NewProp_ReferencedPatchClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreatePatchPresetBuilder_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreatePatchPresetBuilder_Parms, ReturnValue), Z_Construct_UClass_UMetaSoundPatchBuilder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::NewProp_BuilderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::NewProp_ReferencedPatchClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "CreatePatchPresetBuilder", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::MetaSoundBuilderSubsystem_eventCreatePatchPresetBuilder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::MetaSoundBuilderSubsystem_eventCreatePatchPresetBuilder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execCreatePatchPresetBuilder)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BuilderName);
	P_GET_TINTERFACE_REF(IMetaSoundDocumentInterface,Z_Param_Out_ReferencedPatchClass);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMetaSoundPatchBuilder**)Z_Param__Result=P_THIS->CreatePatchPresetBuilder(Z_Param_BuilderName,Z_Param_Out_ReferencedPatchClass,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function CreatePatchPresetBuilder

// Begin Class UMetaSoundBuilderSubsystem Function CreateSourceBuilder
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics
{
	struct MetaSoundBuilderSubsystem_eventCreateSourceBuilder_Parms
	{
		FName BuilderName;
		FMetaSoundBuilderNodeOutputHandle OnPlayNodeOutput;
		FMetaSoundBuilderNodeInputHandle OnFinishedNodeInput;
		TArray<FMetaSoundBuilderNodeInputHandle> AudioOutNodeInputs;
		EMetaSoundBuilderResult OutResult;
		EMetaSoundOutputAudioFormat OutputFormat;
		bool bIsOneShot;
		UMetaSoundSourceBuilder* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "CPP_Default_bIsOneShot", "true" },
		{ "CPP_Default_OutputFormat", "Mono" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Source Builder" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BuilderName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OnPlayNodeOutput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OnFinishedNodeInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AudioOutNodeInputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AudioOutNodeInputs;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputFormat;
	static void NewProp_bIsOneShot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOneShot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_BuilderName = { "BuilderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateSourceBuilder_Parms, BuilderName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_OnPlayNodeOutput = { "OnPlayNodeOutput", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateSourceBuilder_Parms, OnPlayNodeOutput), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle, METADATA_PARAMS(0, nullptr) }; // 1617832807
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_OnFinishedNodeInput = { "OnFinishedNodeInput", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateSourceBuilder_Parms, OnFinishedNodeInput), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(0, nullptr) }; // 2511432690
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_AudioOutNodeInputs_Inner = { "AudioOutNodeInputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(0, nullptr) }; // 2511432690
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_AudioOutNodeInputs = { "AudioOutNodeInputs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateSourceBuilder_Parms, AudioOutNodeInputs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2511432690
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateSourceBuilder_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_OutputFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_OutputFormat = { "OutputFormat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateSourceBuilder_Parms, OutputFormat), Z_Construct_UEnum_MetasoundEngine_EMetaSoundOutputAudioFormat, METADATA_PARAMS(0, nullptr) }; // 528543909
void Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_bIsOneShot_SetBit(void* Obj)
{
	((MetaSoundBuilderSubsystem_eventCreateSourceBuilder_Parms*)Obj)->bIsOneShot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_bIsOneShot = { "bIsOneShot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderSubsystem_eventCreateSourceBuilder_Parms), &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_bIsOneShot_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateSourceBuilder_Parms, ReturnValue), Z_Construct_UClass_UMetaSoundSourceBuilder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_BuilderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_OnPlayNodeOutput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_OnFinishedNodeInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_AudioOutNodeInputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_AudioOutNodeInputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_OutputFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_OutputFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_bIsOneShot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "CreateSourceBuilder", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::MetaSoundBuilderSubsystem_eventCreateSourceBuilder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::MetaSoundBuilderSubsystem_eventCreateSourceBuilder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execCreateSourceBuilder)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BuilderName);
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeOutputHandle,Z_Param_Out_OnPlayNodeOutput);
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeInputHandle,Z_Param_Out_OnFinishedNodeInput);
	P_GET_TARRAY_REF(FMetaSoundBuilderNodeInputHandle,Z_Param_Out_AudioOutNodeInputs);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_GET_ENUM(EMetaSoundOutputAudioFormat,Z_Param_OutputFormat);
	P_GET_UBOOL(Z_Param_bIsOneShot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMetaSoundSourceBuilder**)Z_Param__Result=P_THIS->CreateSourceBuilder(Z_Param_BuilderName,Z_Param_Out_OnPlayNodeOutput,Z_Param_Out_OnFinishedNodeInput,Z_Param_Out_AudioOutNodeInputs,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult),EMetaSoundOutputAudioFormat(Z_Param_OutputFormat),Z_Param_bIsOneShot);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function CreateSourceBuilder

// Begin Class UMetaSoundBuilderSubsystem Function CreateSourcePresetBuilder
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics
{
	struct MetaSoundBuilderSubsystem_eventCreateSourcePresetBuilder_Parms
	{
		FName BuilderName;
		TScriptInterface<IMetaSoundDocumentInterface> ReferencedSourceClass;
		EMetaSoundBuilderResult OutResult;
		UMetaSoundSourceBuilder* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedSourceClass_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Source Preset Builder" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BuilderName;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReferencedSourceClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::NewProp_BuilderName = { "BuilderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateSourcePresetBuilder_Parms, BuilderName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::NewProp_ReferencedSourceClass = { "ReferencedSourceClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateSourcePresetBuilder_Parms, ReferencedSourceClass), Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencedSourceClass_MetaData), NewProp_ReferencedSourceClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateSourcePresetBuilder_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 3772105989
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateSourcePresetBuilder_Parms, ReturnValue), Z_Construct_UClass_UMetaSoundSourceBuilder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::NewProp_BuilderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::NewProp_ReferencedSourceClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "CreateSourcePresetBuilder", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::MetaSoundBuilderSubsystem_eventCreateSourcePresetBuilder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::MetaSoundBuilderSubsystem_eventCreateSourcePresetBuilder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execCreateSourcePresetBuilder)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BuilderName);
	P_GET_TINTERFACE_REF(IMetaSoundDocumentInterface,Z_Param_Out_ReferencedSourceClass);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMetaSoundSourceBuilder**)Z_Param__Result=P_THIS->CreateSourcePresetBuilder(Z_Param_BuilderName,Z_Param_Out_ReferencedSourceClass,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function CreateSourcePresetBuilder

// Begin Class UMetaSoundBuilderSubsystem Function CreateStringArrayMetaSoundLiteral
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Statics
{
	struct MetaSoundBuilderSubsystem_eventCreateStringArrayMetaSoundLiteral_Parms
	{
		TArray<FString> Value;
		FName DataType;
		FMetasoundFrontendLiteral ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "DisplayName", "Create MetaSound String Array Literal" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "String Array Literal" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateStringArrayMetaSoundLiteral_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateStringArrayMetaSoundLiteral_Parms, DataType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateStringArrayMetaSoundLiteral_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "CreateStringArrayMetaSoundLiteral", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateStringArrayMetaSoundLiteral_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateStringArrayMetaSoundLiteral_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execCreateStringArrayMetaSoundLiteral)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DataType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendLiteral*)Z_Param__Result=P_THIS->CreateStringArrayMetaSoundLiteral(Z_Param_Out_Value,Z_Param_Out_DataType);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function CreateStringArrayMetaSoundLiteral

// Begin Class UMetaSoundBuilderSubsystem Function CreateStringMetaSoundLiteral
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral_Statics
{
	struct MetaSoundBuilderSubsystem_eventCreateStringMetaSoundLiteral_Parms
	{
		FString Value;
		FName DataType;
		FMetasoundFrontendLiteral ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "DisplayName", "Create MetaSound String Literal" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "String Literal" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateStringMetaSoundLiteral_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateStringMetaSoundLiteral_Parms, DataType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateStringMetaSoundLiteral_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "CreateStringMetaSoundLiteral", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateStringMetaSoundLiteral_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateStringMetaSoundLiteral_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execCreateStringMetaSoundLiteral)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DataType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendLiteral*)Z_Param__Result=P_THIS->CreateStringMetaSoundLiteral(Z_Param_Value,Z_Param_Out_DataType);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function CreateStringMetaSoundLiteral

// Begin Class UMetaSoundBuilderSubsystem Function FindBuilder
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilder_Statics
{
	struct MetaSoundBuilderSubsystem_eventFindBuilder_Parms
	{
		FName BuilderName;
		UMetaSoundBuilderBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns the builder manually registered with the MetaSound Builder Subsystem with the provided custom name (if previously registered)\n" },
		{ "DisplayName", "Find Builder By Name" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Returns the builder manually registered with the MetaSound Builder Subsystem with the provided custom name (if previously registered)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Builder" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BuilderName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilder_Statics::NewProp_BuilderName = { "BuilderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventFindBuilder_Parms, BuilderName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventFindBuilder_Parms, ReturnValue), Z_Construct_UClass_UMetaSoundBuilderBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilder_Statics::NewProp_BuilderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "FindBuilder", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilder_Statics::MetaSoundBuilderSubsystem_eventFindBuilder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilder_Statics::MetaSoundBuilderSubsystem_eventFindBuilder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execFindBuilder)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BuilderName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMetaSoundBuilderBase**)Z_Param__Result=P_THIS->FindBuilder(Z_Param_BuilderName);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function FindBuilder

// Begin Class UMetaSoundBuilderSubsystem Function FindBuilderOfDocument
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilderOfDocument_Statics
{
	struct MetaSoundBuilderSubsystem_eventFindBuilderOfDocument_Parms
	{
		TScriptInterface<IMetaSoundDocumentInterface> InMetaSound;
		UMetaSoundBuilderBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns the builder associated with the given MetaSound (if one exists, transient or asset).\n" },
		{ "DisplayName", "Find Builder By MetaSound" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Returns the builder associated with the given MetaSound (if one exists, transient or asset)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMetaSound_MetaData[] = {
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Builder" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_InMetaSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilderOfDocument_Statics::NewProp_InMetaSound = { "InMetaSound", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventFindBuilderOfDocument_Parms, InMetaSound), Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMetaSound_MetaData), NewProp_InMetaSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilderOfDocument_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventFindBuilderOfDocument_Parms, ReturnValue), Z_Construct_UClass_UMetaSoundBuilderBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilderOfDocument_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilderOfDocument_Statics::NewProp_InMetaSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilderOfDocument_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilderOfDocument_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilderOfDocument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "FindBuilderOfDocument", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilderOfDocument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilderOfDocument_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilderOfDocument_Statics::MetaSoundBuilderSubsystem_eventFindBuilderOfDocument_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilderOfDocument_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilderOfDocument_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilderOfDocument_Statics::MetaSoundBuilderSubsystem_eventFindBuilderOfDocument_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilderOfDocument()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilderOfDocument_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execFindBuilderOfDocument)
{
	P_GET_TINTERFACE(IMetaSoundDocumentInterface,Z_Param_InMetaSound);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMetaSoundBuilderBase**)Z_Param__Result=P_THIS->FindBuilderOfDocument(Z_Param_InMetaSound);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function FindBuilderOfDocument

// Begin Class UMetaSoundBuilderSubsystem Function FindPatchBuilder
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindPatchBuilder_Statics
{
	struct MetaSoundBuilderSubsystem_eventFindPatchBuilder_Parms
	{
		FName BuilderName;
		UMetaSoundPatchBuilder* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns the patch builder manually registered with the MetaSound Builder Subsystem with the provided custom name (if previously registered)\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Returns the patch builder manually registered with the MetaSound Builder Subsystem with the provided custom name (if previously registered)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Patch Builder" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BuilderName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindPatchBuilder_Statics::NewProp_BuilderName = { "BuilderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventFindPatchBuilder_Parms, BuilderName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindPatchBuilder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventFindPatchBuilder_Parms, ReturnValue), Z_Construct_UClass_UMetaSoundPatchBuilder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindPatchBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindPatchBuilder_Statics::NewProp_BuilderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindPatchBuilder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindPatchBuilder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindPatchBuilder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "FindPatchBuilder", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindPatchBuilder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindPatchBuilder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindPatchBuilder_Statics::MetaSoundBuilderSubsystem_eventFindPatchBuilder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindPatchBuilder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindPatchBuilder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindPatchBuilder_Statics::MetaSoundBuilderSubsystem_eventFindPatchBuilder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindPatchBuilder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindPatchBuilder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execFindPatchBuilder)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BuilderName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMetaSoundPatchBuilder**)Z_Param__Result=P_THIS->FindPatchBuilder(Z_Param_BuilderName);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function FindPatchBuilder

// Begin Class UMetaSoundBuilderSubsystem Function FindSourceBuilder
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindSourceBuilder_Statics
{
	struct MetaSoundBuilderSubsystem_eventFindSourceBuilder_Parms
	{
		FName BuilderName;
		UMetaSoundSourceBuilder* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns the source builder manually registered with the MetaSound Builder Subsystem with the provided custom name (if previously registered)\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Returns the source builder manually registered with the MetaSound Builder Subsystem with the provided custom name (if previously registered)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Source Builder" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BuilderName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindSourceBuilder_Statics::NewProp_BuilderName = { "BuilderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventFindSourceBuilder_Parms, BuilderName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindSourceBuilder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventFindSourceBuilder_Parms, ReturnValue), Z_Construct_UClass_UMetaSoundSourceBuilder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindSourceBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindSourceBuilder_Statics::NewProp_BuilderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindSourceBuilder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindSourceBuilder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindSourceBuilder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "FindSourceBuilder", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindSourceBuilder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindSourceBuilder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindSourceBuilder_Statics::MetaSoundBuilderSubsystem_eventFindSourceBuilder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindSourceBuilder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindSourceBuilder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindSourceBuilder_Statics::MetaSoundBuilderSubsystem_eventFindSourceBuilder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindSourceBuilder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindSourceBuilder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execFindSourceBuilder)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BuilderName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMetaSoundSourceBuilder**)Z_Param__Result=P_THIS->FindSourceBuilder(Z_Param_BuilderName);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function FindSourceBuilder

// Begin Class UMetaSoundBuilderSubsystem Function IsInterfaceRegistered
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_IsInterfaceRegistered_Statics
{
	struct MetaSoundBuilderSubsystem_eventIsInterfaceRegistered_Parms
	{
		FName InInterfaceName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Is Registered" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InInterfaceName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_IsInterfaceRegistered_Statics::NewProp_InInterfaceName = { "InInterfaceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventIsInterfaceRegistered_Parms, InInterfaceName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMetaSoundBuilderSubsystem_IsInterfaceRegistered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetaSoundBuilderSubsystem_eventIsInterfaceRegistered_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_IsInterfaceRegistered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderSubsystem_eventIsInterfaceRegistered_Parms), &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_IsInterfaceRegistered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_IsInterfaceRegistered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_IsInterfaceRegistered_Statics::NewProp_InInterfaceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_IsInterfaceRegistered_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_IsInterfaceRegistered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_IsInterfaceRegistered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "IsInterfaceRegistered", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_IsInterfaceRegistered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_IsInterfaceRegistered_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_IsInterfaceRegistered_Statics::MetaSoundBuilderSubsystem_eventIsInterfaceRegistered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_IsInterfaceRegistered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_IsInterfaceRegistered_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_IsInterfaceRegistered_Statics::MetaSoundBuilderSubsystem_eventIsInterfaceRegistered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_IsInterfaceRegistered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_IsInterfaceRegistered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execIsInterfaceRegistered)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InInterfaceName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInterfaceRegistered(Z_Param_InInterfaceName);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function IsInterfaceRegistered

// Begin Class UMetaSoundBuilderSubsystem Function RegisterBuilder
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterBuilder_Statics
{
	struct MetaSoundBuilderSubsystem_eventRegisterBuilder_Parms
	{
		FName BuilderName;
		UMetaSoundBuilderBase* Builder;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Adds builder to subsystem's registry to make it persistent and easily accessible by multiple systems or Blueprints\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Adds builder to subsystem's registry to make it persistent and easily accessible by multiple systems or Blueprints" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BuilderName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterBuilder_Statics::NewProp_BuilderName = { "BuilderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventRegisterBuilder_Parms, BuilderName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterBuilder_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventRegisterBuilder_Parms, Builder), Z_Construct_UClass_UMetaSoundBuilderBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterBuilder_Statics::NewProp_BuilderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterBuilder_Statics::NewProp_Builder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterBuilder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterBuilder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "RegisterBuilder", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterBuilder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterBuilder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterBuilder_Statics::MetaSoundBuilderSubsystem_eventRegisterBuilder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterBuilder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterBuilder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterBuilder_Statics::MetaSoundBuilderSubsystem_eventRegisterBuilder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterBuilder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterBuilder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execRegisterBuilder)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BuilderName);
	P_GET_OBJECT(UMetaSoundBuilderBase,Z_Param_Builder);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterBuilder(Z_Param_BuilderName,Z_Param_Builder);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function RegisterBuilder

// Begin Class UMetaSoundBuilderSubsystem Function RegisterPatchBuilder
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterPatchBuilder_Statics
{
	struct MetaSoundBuilderSubsystem_eventRegisterPatchBuilder_Parms
	{
		FName BuilderName;
		UMetaSoundPatchBuilder* Builder;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Adds builder to subsystem's registry to make it persistent and easily accessible by multiple systems or Blueprints\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Adds builder to subsystem's registry to make it persistent and easily accessible by multiple systems or Blueprints" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BuilderName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterPatchBuilder_Statics::NewProp_BuilderName = { "BuilderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventRegisterPatchBuilder_Parms, BuilderName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterPatchBuilder_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventRegisterPatchBuilder_Parms, Builder), Z_Construct_UClass_UMetaSoundPatchBuilder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterPatchBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterPatchBuilder_Statics::NewProp_BuilderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterPatchBuilder_Statics::NewProp_Builder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterPatchBuilder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterPatchBuilder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "RegisterPatchBuilder", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterPatchBuilder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterPatchBuilder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterPatchBuilder_Statics::MetaSoundBuilderSubsystem_eventRegisterPatchBuilder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterPatchBuilder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterPatchBuilder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterPatchBuilder_Statics::MetaSoundBuilderSubsystem_eventRegisterPatchBuilder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterPatchBuilder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterPatchBuilder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execRegisterPatchBuilder)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BuilderName);
	P_GET_OBJECT(UMetaSoundPatchBuilder,Z_Param_Builder);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterPatchBuilder(Z_Param_BuilderName,Z_Param_Builder);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function RegisterPatchBuilder

// Begin Class UMetaSoundBuilderSubsystem Function RegisterSourceBuilder
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterSourceBuilder_Statics
{
	struct MetaSoundBuilderSubsystem_eventRegisterSourceBuilder_Parms
	{
		FName BuilderName;
		UMetaSoundSourceBuilder* Builder;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Adds builder to subsystem's registry to make it persistent and easily accessible by multiple systems or Blueprints\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Adds builder to subsystem's registry to make it persistent and easily accessible by multiple systems or Blueprints" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BuilderName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterSourceBuilder_Statics::NewProp_BuilderName = { "BuilderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventRegisterSourceBuilder_Parms, BuilderName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterSourceBuilder_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventRegisterSourceBuilder_Parms, Builder), Z_Construct_UClass_UMetaSoundSourceBuilder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterSourceBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterSourceBuilder_Statics::NewProp_BuilderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterSourceBuilder_Statics::NewProp_Builder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterSourceBuilder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterSourceBuilder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "RegisterSourceBuilder", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterSourceBuilder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterSourceBuilder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterSourceBuilder_Statics::MetaSoundBuilderSubsystem_eventRegisterSourceBuilder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterSourceBuilder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterSourceBuilder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterSourceBuilder_Statics::MetaSoundBuilderSubsystem_eventRegisterSourceBuilder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterSourceBuilder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterSourceBuilder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execRegisterSourceBuilder)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BuilderName);
	P_GET_OBJECT(UMetaSoundSourceBuilder,Z_Param_Builder);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterSourceBuilder(Z_Param_BuilderName,Z_Param_Builder);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function RegisterSourceBuilder

// Begin Class UMetaSoundBuilderSubsystem Function UnregisterBuilder
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterBuilder_Statics
{
	struct MetaSoundBuilderSubsystem_eventUnregisterBuilder_Parms
	{
		FName BuilderName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Unregistered" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BuilderName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterBuilder_Statics::NewProp_BuilderName = { "BuilderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventUnregisterBuilder_Parms, BuilderName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterBuilder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetaSoundBuilderSubsystem_eventUnregisterBuilder_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterBuilder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderSubsystem_eventUnregisterBuilder_Parms), &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterBuilder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterBuilder_Statics::NewProp_BuilderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterBuilder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterBuilder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterBuilder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "UnregisterBuilder", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterBuilder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterBuilder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterBuilder_Statics::MetaSoundBuilderSubsystem_eventUnregisterBuilder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterBuilder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterBuilder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterBuilder_Statics::MetaSoundBuilderSubsystem_eventUnregisterBuilder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterBuilder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterBuilder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execUnregisterBuilder)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BuilderName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UnregisterBuilder(Z_Param_BuilderName);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function UnregisterBuilder

// Begin Class UMetaSoundBuilderSubsystem Function UnregisterPatchBuilder
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterPatchBuilder_Statics
{
	struct MetaSoundBuilderSubsystem_eventUnregisterPatchBuilder_Parms
	{
		FName BuilderName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Unregistered" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BuilderName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterPatchBuilder_Statics::NewProp_BuilderName = { "BuilderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventUnregisterPatchBuilder_Parms, BuilderName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterPatchBuilder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetaSoundBuilderSubsystem_eventUnregisterPatchBuilder_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterPatchBuilder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderSubsystem_eventUnregisterPatchBuilder_Parms), &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterPatchBuilder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterPatchBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterPatchBuilder_Statics::NewProp_BuilderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterPatchBuilder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterPatchBuilder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterPatchBuilder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "UnregisterPatchBuilder", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterPatchBuilder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterPatchBuilder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterPatchBuilder_Statics::MetaSoundBuilderSubsystem_eventUnregisterPatchBuilder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterPatchBuilder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterPatchBuilder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterPatchBuilder_Statics::MetaSoundBuilderSubsystem_eventUnregisterPatchBuilder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterPatchBuilder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterPatchBuilder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execUnregisterPatchBuilder)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BuilderName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UnregisterPatchBuilder(Z_Param_BuilderName);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function UnregisterPatchBuilder

// Begin Class UMetaSoundBuilderSubsystem Function UnregisterSourceBuilder
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterSourceBuilder_Statics
{
	struct MetaSoundBuilderSubsystem_eventUnregisterSourceBuilder_Parms
	{
		FName BuilderName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Unregistered" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BuilderName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterSourceBuilder_Statics::NewProp_BuilderName = { "BuilderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventUnregisterSourceBuilder_Parms, BuilderName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterSourceBuilder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetaSoundBuilderSubsystem_eventUnregisterSourceBuilder_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterSourceBuilder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderSubsystem_eventUnregisterSourceBuilder_Parms), &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterSourceBuilder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterSourceBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterSourceBuilder_Statics::NewProp_BuilderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterSourceBuilder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterSourceBuilder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterSourceBuilder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "UnregisterSourceBuilder", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterSourceBuilder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterSourceBuilder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterSourceBuilder_Statics::MetaSoundBuilderSubsystem_eventUnregisterSourceBuilder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterSourceBuilder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterSourceBuilder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterSourceBuilder_Statics::MetaSoundBuilderSubsystem_eventUnregisterSourceBuilder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterSourceBuilder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterSourceBuilder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execUnregisterSourceBuilder)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BuilderName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UnregisterSourceBuilder(Z_Param_BuilderName);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function UnregisterSourceBuilder

// Begin Class UMetaSoundBuilderSubsystem
void UMetaSoundBuilderSubsystem::StaticRegisterNativesUMetaSoundBuilderSubsystem()
{
	UClass* Class = UMetaSoundBuilderSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateBoolArrayMetaSoundLiteral", &UMetaSoundBuilderSubsystem::execCreateBoolArrayMetaSoundLiteral },
		{ "CreateBoolMetaSoundLiteral", &UMetaSoundBuilderSubsystem::execCreateBoolMetaSoundLiteral },
		{ "CreateFloatArrayMetaSoundLiteral", &UMetaSoundBuilderSubsystem::execCreateFloatArrayMetaSoundLiteral },
		{ "CreateFloatMetaSoundLiteral", &UMetaSoundBuilderSubsystem::execCreateFloatMetaSoundLiteral },
		{ "CreateIntArrayMetaSoundLiteral", &UMetaSoundBuilderSubsystem::execCreateIntArrayMetaSoundLiteral },
		{ "CreateIntMetaSoundLiteral", &UMetaSoundBuilderSubsystem::execCreateIntMetaSoundLiteral },
		{ "CreateMetaSoundLiteralFromParam", &UMetaSoundBuilderSubsystem::execCreateMetaSoundLiteralFromParam },
		{ "CreateObjectArrayMetaSoundLiteral", &UMetaSoundBuilderSubsystem::execCreateObjectArrayMetaSoundLiteral },
		{ "CreateObjectMetaSoundLiteral", &UMetaSoundBuilderSubsystem::execCreateObjectMetaSoundLiteral },
		{ "CreatePatchBuilder", &UMetaSoundBuilderSubsystem::execCreatePatchBuilder },
		{ "CreatePatchPresetBuilder", &UMetaSoundBuilderSubsystem::execCreatePatchPresetBuilder },
		{ "CreateSourceBuilder", &UMetaSoundBuilderSubsystem::execCreateSourceBuilder },
		{ "CreateSourcePresetBuilder", &UMetaSoundBuilderSubsystem::execCreateSourcePresetBuilder },
		{ "CreateStringArrayMetaSoundLiteral", &UMetaSoundBuilderSubsystem::execCreateStringArrayMetaSoundLiteral },
		{ "CreateStringMetaSoundLiteral", &UMetaSoundBuilderSubsystem::execCreateStringMetaSoundLiteral },
		{ "FindBuilder", &UMetaSoundBuilderSubsystem::execFindBuilder },
		{ "FindBuilderOfDocument", &UMetaSoundBuilderSubsystem::execFindBuilderOfDocument },
		{ "FindPatchBuilder", &UMetaSoundBuilderSubsystem::execFindPatchBuilder },
		{ "FindSourceBuilder", &UMetaSoundBuilderSubsystem::execFindSourceBuilder },
		{ "IsInterfaceRegistered", &UMetaSoundBuilderSubsystem::execIsInterfaceRegistered },
		{ "RegisterBuilder", &UMetaSoundBuilderSubsystem::execRegisterBuilder },
		{ "RegisterPatchBuilder", &UMetaSoundBuilderSubsystem::execRegisterPatchBuilder },
		{ "RegisterSourceBuilder", &UMetaSoundBuilderSubsystem::execRegisterSourceBuilder },
		{ "UnregisterBuilder", &UMetaSoundBuilderSubsystem::execUnregisterBuilder },
		{ "UnregisterPatchBuilder", &UMetaSoundBuilderSubsystem::execUnregisterPatchBuilder },
		{ "UnregisterSourceBuilder", &UMetaSoundBuilderSubsystem::execUnregisterSourceBuilder },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetaSoundBuilderSubsystem);
UClass* Z_Construct_UClass_UMetaSoundBuilderSubsystem_NoRegister()
{
	return UMetaSoundBuilderSubsystem::StaticClass();
}
struct Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** The subsystem in charge of tracking MetaSound builders */" },
		{ "IncludePath", "MetasoundBuilderSubsystem.h" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "The subsystem in charge of tracking MetaSound builders" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NamedBuilders_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetBuilders_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransientBuilders_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NamedBuilders_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NamedBuilders_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NamedBuilders;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AssetBuilders_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetBuilders_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AssetBuilders;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TransientBuilders_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransientBuilders_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TransientBuilders;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral, "CreateBoolArrayMetaSoundLiteral" }, // 2067059754
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral, "CreateBoolMetaSoundLiteral" }, // 3420499803
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral, "CreateFloatArrayMetaSoundLiteral" }, // 1981793711
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral, "CreateFloatMetaSoundLiteral" }, // 2044444500
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral, "CreateIntArrayMetaSoundLiteral" }, // 1233952407
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral, "CreateIntMetaSoundLiteral" }, // 326189789
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam, "CreateMetaSoundLiteralFromParam" }, // 2276362450
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral, "CreateObjectArrayMetaSoundLiteral" }, // 3412463259
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral, "CreateObjectMetaSoundLiteral" }, // 1752617438
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder, "CreatePatchBuilder" }, // 2880079485
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder, "CreatePatchPresetBuilder" }, // 1678950325
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder, "CreateSourceBuilder" }, // 1376635303
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder, "CreateSourcePresetBuilder" }, // 3404891117
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral, "CreateStringArrayMetaSoundLiteral" }, // 898349415
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral, "CreateStringMetaSoundLiteral" }, // 1659301519
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilder, "FindBuilder" }, // 3778794455
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilderOfDocument, "FindBuilderOfDocument" }, // 781446057
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindPatchBuilder, "FindPatchBuilder" }, // 2031110610
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindSourceBuilder, "FindSourceBuilder" }, // 3009493785
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_IsInterfaceRegistered, "IsInterfaceRegistered" }, // 2485618497
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterBuilder, "RegisterBuilder" }, // 1303738904
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterPatchBuilder, "RegisterPatchBuilder" }, // 783648486
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterSourceBuilder, "RegisterSourceBuilder" }, // 1327437994
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterBuilder, "UnregisterBuilder" }, // 3866363739
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterPatchBuilder, "UnregisterPatchBuilder" }, // 2723986781
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterSourceBuilder, "UnregisterSourceBuilder" }, // 393085495
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetaSoundBuilderSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::NewProp_NamedBuilders_ValueProp = { "NamedBuilders", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMetaSoundBuilderBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::NewProp_NamedBuilders_Key_KeyProp = { "NamedBuilders_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::NewProp_NamedBuilders = { "NamedBuilders", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundBuilderSubsystem, NamedBuilders), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NamedBuilders_MetaData), NewProp_NamedBuilders_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::NewProp_AssetBuilders_ValueProp = { "AssetBuilders", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMetaSoundBuilderBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::NewProp_AssetBuilders_Key_KeyProp = { "AssetBuilders_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetasoundFrontendClassName, METADATA_PARAMS(0, nullptr) }; // 2449018862
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::NewProp_AssetBuilders = { "AssetBuilders", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundBuilderSubsystem, AssetBuilders), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetBuilders_MetaData), NewProp_AssetBuilders_MetaData) }; // 2449018862
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::NewProp_TransientBuilders_ValueProp = { "TransientBuilders", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMetaSoundBuilderBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::NewProp_TransientBuilders_Key_KeyProp = { "TransientBuilders_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetasoundFrontendClassName, METADATA_PARAMS(0, nullptr) }; // 2449018862
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::NewProp_TransientBuilders = { "TransientBuilders", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundBuilderSubsystem, TransientBuilders), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransientBuilders_MetaData), NewProp_TransientBuilders_MetaData) }; // 2449018862
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::NewProp_NamedBuilders_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::NewProp_NamedBuilders_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::NewProp_NamedBuilders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::NewProp_AssetBuilders_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::NewProp_AssetBuilders_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::NewProp_AssetBuilders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::NewProp_TransientBuilders_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::NewProp_TransientBuilders_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::NewProp_TransientBuilders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::ClassParams = {
	&UMetaSoundBuilderSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMetaSoundBuilderSubsystem()
{
	if (!Z_Registration_Info_UClass_UMetaSoundBuilderSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetaSoundBuilderSubsystem.OuterSingleton, Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMetaSoundBuilderSubsystem.OuterSingleton;
}
template<> METASOUNDENGINE_API UClass* StaticClass<UMetaSoundBuilderSubsystem>()
{
	return UMetaSoundBuilderSubsystem::StaticClass();
}
UMetaSoundBuilderSubsystem::UMetaSoundBuilderSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMetaSoundBuilderSubsystem);
UMetaSoundBuilderSubsystem::~UMetaSoundBuilderSubsystem() {}
// End Class UMetaSoundBuilderSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMetaSoundBuilderResult_StaticEnum, TEXT("EMetaSoundBuilderResult"), &Z_Registration_Info_UEnum_EMetaSoundBuilderResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3772105989U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMetaSoundBuilderNodeInputHandle::StaticStruct, Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle_Statics::NewStructOps, TEXT("MetaSoundBuilderNodeInputHandle"), &Z_Registration_Info_UScriptStruct_MetaSoundBuilderNodeInputHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetaSoundBuilderNodeInputHandle), 2511432690U) },
		{ FMetaSoundBuilderNodeOutputHandle::StaticStruct, Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle_Statics::NewStructOps, TEXT("MetaSoundBuilderNodeOutputHandle"), &Z_Registration_Info_UScriptStruct_MetaSoundBuilderNodeOutputHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetaSoundBuilderNodeOutputHandle), 1617832807U) },
		{ FMetaSoundNodeHandle::StaticStruct, Z_Construct_UScriptStruct_FMetaSoundNodeHandle_Statics::NewStructOps, TEXT("MetaSoundNodeHandle"), &Z_Registration_Info_UScriptStruct_MetaSoundNodeHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetaSoundNodeHandle), 4077983575U) },
		{ FMetaSoundBuilderOptions::StaticStruct, Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics::NewStructOps, TEXT("MetaSoundBuilderOptions"), &Z_Registration_Info_UScriptStruct_MetaSoundBuilderOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetaSoundBuilderOptions), 2552444882U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMetaSoundBuilderBase, UMetaSoundBuilderBase::StaticClass, TEXT("UMetaSoundBuilderBase"), &Z_Registration_Info_UClass_UMetaSoundBuilderBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetaSoundBuilderBase), 2152007409U) },
		{ Z_Construct_UClass_UMetaSoundPatchBuilder, UMetaSoundPatchBuilder::StaticClass, TEXT("UMetaSoundPatchBuilder"), &Z_Registration_Info_UClass_UMetaSoundPatchBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetaSoundPatchBuilder), 3366637594U) },
		{ Z_Construct_UClass_UMetaSoundSourceBuilder, UMetaSoundSourceBuilder::StaticClass, TEXT("UMetaSoundSourceBuilder"), &Z_Registration_Info_UClass_UMetaSoundSourceBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetaSoundSourceBuilder), 3679968194U) },
		{ Z_Construct_UClass_UMetaSoundBuilderSubsystem, UMetaSoundBuilderSubsystem::StaticClass, TEXT("UMetaSoundBuilderSubsystem"), &Z_Registration_Info_UClass_UMetaSoundBuilderSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetaSoundBuilderSubsystem), 276632039U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_907282265(TEXT("/Script/MetasoundEngine"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
