// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/MovieScene/Public/MovieSceneDynamicBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSpawnable() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_ESpawnOwnership();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDynamicBinding();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSpawnable();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Enum ESpawnOwnership
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpawnOwnership;
static UEnum* ESpawnOwnership_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESpawnOwnership.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESpawnOwnership.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_ESpawnOwnership, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("ESpawnOwnership"));
	}
	return Z_Registration_Info_UEnum_ESpawnOwnership.OuterSingleton;
}
template<> MOVIESCENE_API UEnum* StaticEnum<ESpawnOwnership>()
{
	return ESpawnOwnership_StaticEnum();
}
struct Z_Construct_UEnum_MovieScene_ESpawnOwnership_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "External.Comment", "/** Once spawned, the object's lifetime is managed externally. */" },
		{ "External.Name", "ESpawnOwnership::External" },
		{ "External.ToolTip", "Once spawned, the object's lifetime is managed externally." },
		{ "InnerSequence.Comment", "/** The object's lifetime is managed by the sequence that spawned it */" },
		{ "InnerSequence.Name", "ESpawnOwnership::InnerSequence" },
		{ "InnerSequence.ToolTip", "The object's lifetime is managed by the sequence that spawned it" },
		{ "ModuleRelativePath", "Public/MovieSceneSpawnable.h" },
		{ "RootSequence.Comment", "/** The object's lifetime is managed by the outermost sequence */" },
		{ "RootSequence.Name", "ESpawnOwnership::RootSequence" },
		{ "RootSequence.ToolTip", "The object's lifetime is managed by the outermost sequence" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESpawnOwnership::InnerSequence", (int64)ESpawnOwnership::InnerSequence },
		{ "ESpawnOwnership::RootSequence", (int64)ESpawnOwnership::RootSequence },
		{ "ESpawnOwnership::External", (int64)ESpawnOwnership::External },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieScene_ESpawnOwnership_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	"ESpawnOwnership",
	"ESpawnOwnership",
	Z_Construct_UEnum_MovieScene_ESpawnOwnership_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_ESpawnOwnership_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_ESpawnOwnership_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MovieScene_ESpawnOwnership_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MovieScene_ESpawnOwnership()
{
	if (!Z_Registration_Info_UEnum_ESpawnOwnership.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpawnOwnership.InnerSingleton, Z_Construct_UEnum_MovieScene_ESpawnOwnership_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESpawnOwnership.InnerSingleton;
}
// End Enum ESpawnOwnership

// Begin ScriptStruct FMovieSceneSpawnable
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSpawnable;
class UScriptStruct* FMovieSceneSpawnable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSpawnable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSpawnable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSpawnable, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSpawnable"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSpawnable.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSpawnable>()
{
	return FMovieSceneSpawnable::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * MovieSceneSpawnable describes an object that can be spawned for this MovieScene\n */" },
		{ "ModuleRelativePath", "Public/MovieSceneSpawnable.h" },
		{ "ToolTip", "MovieSceneSpawnable describes an object that can be spawned for this MovieScene" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Optional spawn transform */" },
		{ "ModuleRelativePath", "Public/MovieSceneSpawnable.h" },
		{ "ToolTip", "Optional spawn transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Array of tags that can be used for grouping and categorizing. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSpawnable.h" },
		{ "ToolTip", "Array of tags that can be used for grouping and categorizing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bContinuouslyRespawn_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** When enabled, this spawnable will always be respawned if it gets destroyed externally. When disabled, this object will only ever be spawned once for each spawn key even if it is destroyed externally. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSpawnable.h" },
		{ "ToolTip", "When enabled, this spawnable will always be respawned if it gets destroyed externally. When disabled, this object will only ever be spawned once for each spawn key even if it is destroyed externally." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNetAddressableName_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** When enabled, the actor will be spawned with a unique name so that it can be addressable between clients and servers. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSpawnable.h" },
		{ "ToolTip", "When enabled, the actor will be spawned with a unique name so that it can be addressable between clients and servers." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicBinding_MetaData[] = {
		{ "Category", "Sequencer" },
		{ "Comment", "/** Optional user-defined spawning information */" },
		{ "ModuleRelativePath", "Public/MovieSceneSpawnable.h" },
		{ "ToolTip", "Optional user-defined spawning information" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "Comment", "/** Unique identifier of the spawnable object. */// @todo sequencer: Guids need to be handled carefully when the asset is duplicated (or loaded after being copied on disk).\n//\x09\x09\x09\x09\x09Sometimes we'll need to generate fresh Guids.\n" },
		{ "ModuleRelativePath", "Public/MovieSceneSpawnable.h" },
		{ "ToolTip", "Unique identifier of the spawnable object. // @todo sequencer: Guids need to be handled carefully when the asset is duplicated (or loaded after being copied on disk).\n//                                     Sometimes we'll need to generate fresh Guids." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Comment", "/** Name label */// @todo sequencer: Should be editor-only probably\n" },
		{ "ModuleRelativePath", "Public/MovieSceneSpawnable.h" },
		{ "ToolTip", "Name label // @todo sequencer: Should be editor-only probably" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSpawnable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildPossessables_MetaData[] = {
		{ "Comment", "/** Set of GUIDs to possessable object bindings that are bound to an object inside this spawnable */// @todo sequencer: This should be a TSet, but they don't duplicate correctly atm\n" },
		{ "ModuleRelativePath", "Public/MovieSceneSpawnable.h" },
		{ "ToolTip", "Set of GUIDs to possessable object bindings that are bound to an object inside this spawnable // @todo sequencer: This should be a TSet, but they don't duplicate correctly atm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ownership_MetaData[] = {
		{ "Comment", "/** Property indicating where ownership responsibility for this object lies */" },
		{ "ModuleRelativePath", "Public/MovieSceneSpawnable.h" },
		{ "ToolTip", "Property indicating where ownership responsibility for this object lies" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedClass_MetaData[] = {
		{ "Comment", "/** Deprecated generated class */" },
		{ "ModuleRelativePath", "Public/MovieSceneSpawnable.h" },
		{ "ToolTip", "Deprecated generated class" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[] = {
		{ "Comment", "/** Name of level to spawn into */" },
		{ "ModuleRelativePath", "Public/MovieSceneSpawnable.h" },
		{ "ToolTip", "Name of level to spawn into" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static void NewProp_bContinuouslyRespawn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bContinuouslyRespawn;
	static void NewProp_bNetAddressableName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNetAddressableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectTemplate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChildPossessables_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildPossessables;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Ownership_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Ownership;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_GeneratedClass;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_LevelName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSpawnable>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSpawnable, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnTransform_MetaData), NewProp_SpawnTransform_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSpawnable, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_bContinuouslyRespawn_SetBit(void* Obj)
{
	((FMovieSceneSpawnable*)Obj)->bContinuouslyRespawn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_bContinuouslyRespawn = { "bContinuouslyRespawn", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneSpawnable), &Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_bContinuouslyRespawn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bContinuouslyRespawn_MetaData), NewProp_bContinuouslyRespawn_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_bNetAddressableName_SetBit(void* Obj)
{
	((FMovieSceneSpawnable*)Obj)->bNetAddressableName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_bNetAddressableName = { "bNetAddressableName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneSpawnable), &Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_bNetAddressableName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNetAddressableName_MetaData), NewProp_bNetAddressableName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_DynamicBinding = { "DynamicBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSpawnable, DynamicBinding), Z_Construct_UScriptStruct_FMovieSceneDynamicBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicBinding_MetaData), NewProp_DynamicBinding_MetaData) }; // 1420086444
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSpawnable, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSpawnable, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_ObjectTemplate = { "ObjectTemplate", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSpawnable, ObjectTemplate), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectTemplate_MetaData), NewProp_ObjectTemplate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_ChildPossessables_Inner = { "ChildPossessables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_ChildPossessables = { "ChildPossessables", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSpawnable, ChildPossessables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildPossessables_MetaData), NewProp_ChildPossessables_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_Ownership_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_Ownership = { "Ownership", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSpawnable, Ownership), Z_Construct_UEnum_MovieScene_ESpawnOwnership, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ownership_MetaData), NewProp_Ownership_MetaData) }; // 1053602699
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_GeneratedClass = { "GeneratedClass", nullptr, (EPropertyFlags)0x0114000820000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSpawnable, GeneratedClass_DEPRECATED), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedClass_MetaData), NewProp_GeneratedClass_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSpawnable, LevelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelName_MetaData), NewProp_LevelName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_SpawnTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_bContinuouslyRespawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_bNetAddressableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_DynamicBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_Guid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_ObjectTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_ChildPossessables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_ChildPossessables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_Ownership_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_Ownership,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_GeneratedClass,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_LevelName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneSpawnable",
	Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::PropPointers),
	sizeof(FMovieSceneSpawnable),
	alignof(FMovieSceneSpawnable),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSpawnable()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSpawnable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSpawnable.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSpawnable.InnerSingleton;
}
// End ScriptStruct FMovieSceneSpawnable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSpawnable_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESpawnOwnership_StaticEnum, TEXT("ESpawnOwnership"), &Z_Registration_Info_UEnum_ESpawnOwnership, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1053602699U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneSpawnable::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewStructOps, TEXT("MovieSceneSpawnable"), &Z_Registration_Info_UScriptStruct_MovieSceneSpawnable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSpawnable), 611580118U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSpawnable_h_2049676805(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSpawnable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSpawnable_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSpawnable_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSpawnable_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
