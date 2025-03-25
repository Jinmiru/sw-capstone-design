// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LevelSequence/Public/LevelSequenceBindingReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceBindingReference() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceBindingReference();
LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray();
LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceBindingReferences();
LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FUpgradedLevelSequenceBindingReferences();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBindingReferences();
UPackage* Z_Construct_UPackage__Script_LevelSequence();
// End Cross Module References

// Begin ScriptStruct FLevelSequenceBindingReference
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelSequenceBindingReference;
class UScriptStruct* FLevelSequenceBindingReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelSequenceBindingReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelSequenceBindingReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceBindingReference, (UObject*)Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceBindingReference"));
	}
	return Z_Registration_Info_UScriptStruct_LevelSequenceBindingReference.OuterSingleton;
}
template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<FLevelSequenceBindingReference>()
{
	return FLevelSequenceBindingReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * An external reference to an level sequence object, resolvable through an arbitrary context.\n * \n * Bindings consist of an optional package name, and the path to the object within that package.\n * Where package name is empty, the reference is a relative path from a specific outer (the context).\n * Currently, the package name should only ever be empty for component references, which must remain relative bindings to work correctly with spawnables and reinstanced actors.\n */" },
		{ "ModuleRelativePath", "Public/LevelSequenceBindingReference.h" },
		{ "ToolTip", "An external reference to an level sequence object, resolvable through an arbitrary context.\n\nBindings consist of an optional package name, and the path to the object within that package.\nWhere package name is empty, the reference is a relative path from a specific outer (the context).\nCurrently, the package name should only ever be empty for component references, which must remain relative bindings to work correctly with spawnables and reinstanced actors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[] = {
		{ "Comment", "/** Replaced by ExternalObjectPath */" },
		{ "ModuleRelativePath", "Public/LevelSequenceBindingReference.h" },
		{ "ToolTip", "Replaced by ExternalObjectPath" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalObjectPath_MetaData[] = {
		{ "Comment", "/** Path to a specific actor/component inside an external package */" },
		{ "ModuleRelativePath", "Public/LevelSequenceBindingReference.h" },
		{ "ToolTip", "Path to a specific actor/component inside an external package" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPath_MetaData[] = {
		{ "Comment", "/** Object path relative to a passed in context object, this is used if ExternalObjectPath is invalid */" },
		{ "ModuleRelativePath", "Public/LevelSequenceBindingReference.h" },
		{ "ToolTip", "Object path relative to a passed in context object, this is used if ExternalObjectPath is invalid" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackageName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalObjectPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequenceBindingReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelSequenceBindingReference, PackageName_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackageName_MetaData), NewProp_PackageName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewProp_ExternalObjectPath = { "ExternalObjectPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelSequenceBindingReference, ExternalObjectPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalObjectPath_MetaData), NewProp_ExternalObjectPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewProp_ObjectPath = { "ObjectPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelSequenceBindingReference, ObjectPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectPath_MetaData), NewProp_ObjectPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewProp_PackageName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewProp_ExternalObjectPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewProp_ObjectPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	nullptr,
	&NewStructOps,
	"LevelSequenceBindingReference",
	Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::PropPointers),
	sizeof(FLevelSequenceBindingReference),
	alignof(FLevelSequenceBindingReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceBindingReference()
{
	if (!Z_Registration_Info_UScriptStruct_LevelSequenceBindingReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelSequenceBindingReference.InnerSingleton, Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LevelSequenceBindingReference.InnerSingleton;
}
// End ScriptStruct FLevelSequenceBindingReference

// Begin ScriptStruct FLevelSequenceBindingReferenceArray
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelSequenceBindingReferenceArray;
class UScriptStruct* FLevelSequenceBindingReferenceArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelSequenceBindingReferenceArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelSequenceBindingReferenceArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray, (UObject*)Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceBindingReferenceArray"));
	}
	return Z_Registration_Info_UScriptStruct_LevelSequenceBindingReferenceArray.OuterSingleton;
}
template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<FLevelSequenceBindingReferenceArray>()
{
	return FLevelSequenceBindingReferenceArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * An array of binding references\n */" },
		{ "ModuleRelativePath", "Public/LevelSequenceBindingReference.h" },
		{ "ToolTip", "An array of binding references" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_References_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceBindingReference.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_References_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_References;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequenceBindingReferenceArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::NewProp_References_Inner = { "References", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLevelSequenceBindingReference, METADATA_PARAMS(0, nullptr) }; // 4208529082
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::NewProp_References = { "References", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelSequenceBindingReferenceArray, References), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_References_MetaData), NewProp_References_MetaData) }; // 4208529082
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::NewProp_References_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::NewProp_References,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	nullptr,
	&NewStructOps,
	"LevelSequenceBindingReferenceArray",
	Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::PropPointers),
	sizeof(FLevelSequenceBindingReferenceArray),
	alignof(FLevelSequenceBindingReferenceArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray()
{
	if (!Z_Registration_Info_UScriptStruct_LevelSequenceBindingReferenceArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelSequenceBindingReferenceArray.InnerSingleton, Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LevelSequenceBindingReferenceArray.InnerSingleton;
}
// End ScriptStruct FLevelSequenceBindingReferenceArray

// Begin ScriptStruct FUpgradedLevelSequenceBindingReferences
static_assert(std::is_polymorphic<FUpgradedLevelSequenceBindingReferences>() == std::is_polymorphic<FMovieSceneBindingReferences>(), "USTRUCT FUpgradedLevelSequenceBindingReferences cannot be polymorphic unless super FMovieSceneBindingReferences is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UpgradedLevelSequenceBindingReferences;
class UScriptStruct* FUpgradedLevelSequenceBindingReferences::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UpgradedLevelSequenceBindingReferences.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UpgradedLevelSequenceBindingReferences.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUpgradedLevelSequenceBindingReferences, (UObject*)Z_Construct_UPackage__Script_LevelSequence(), TEXT("UpgradedLevelSequenceBindingReferences"));
	}
	return Z_Registration_Info_UScriptStruct_UpgradedLevelSequenceBindingReferences.OuterSingleton;
}
template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<FUpgradedLevelSequenceBindingReferences>()
{
	return FUpgradedLevelSequenceBindingReferences::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUpgradedLevelSequenceBindingReferences_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceBindingReference.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUpgradedLevelSequenceBindingReferences>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUpgradedLevelSequenceBindingReferences_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	Z_Construct_UScriptStruct_FMovieSceneBindingReferences,
	&NewStructOps,
	"UpgradedLevelSequenceBindingReferences",
	nullptr,
	0,
	sizeof(FUpgradedLevelSequenceBindingReferences),
	alignof(FUpgradedLevelSequenceBindingReferences),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpgradedLevelSequenceBindingReferences_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUpgradedLevelSequenceBindingReferences_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUpgradedLevelSequenceBindingReferences()
{
	if (!Z_Registration_Info_UScriptStruct_UpgradedLevelSequenceBindingReferences.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UpgradedLevelSequenceBindingReferences.InnerSingleton, Z_Construct_UScriptStruct_FUpgradedLevelSequenceBindingReferences_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UpgradedLevelSequenceBindingReferences.InnerSingleton;
}
// End ScriptStruct FUpgradedLevelSequenceBindingReferences

// Begin ScriptStruct FLevelSequenceBindingReferences
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelSequenceBindingReferences;
class UScriptStruct* FLevelSequenceBindingReferences::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelSequenceBindingReferences.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelSequenceBindingReferences.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceBindingReferences, (UObject*)Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceBindingReferences"));
	}
	return Z_Registration_Info_UScriptStruct_LevelSequenceBindingReferences.OuterSingleton;
}
template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<FLevelSequenceBindingReferences>()
{
	return FLevelSequenceBindingReferences::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure that stores a one to many mapping from object binding ID, to object references that pertain to that ID.\n */" },
		{ "ModuleRelativePath", "Public/LevelSequenceBindingReference.h" },
		{ "ToolTip", "Structure that stores a one to many mapping from object binding ID, to object references that pertain to that ID." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BindingIdToReferences_MetaData[] = {
		{ "Comment", "/** The map from object binding ID to an array of references that pertain to that ID */" },
		{ "ModuleRelativePath", "Public/LevelSequenceBindingReference.h" },
		{ "ToolTip", "The map from object binding ID to an array of references that pertain to that ID" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimSequenceInstances_MetaData[] = {
		{ "Comment", "/** A set of object binding IDs that relate to anim sequence instances (must be a child of USkeletalMeshComponent) */" },
		{ "ModuleRelativePath", "Public/LevelSequenceBindingReference.h" },
		{ "ToolTip", "A set of object binding IDs that relate to anim sequence instances (must be a child of USkeletalMeshComponent)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessInstances_MetaData[] = {
		{ "Comment", "/** A set of object binding IDs that relate to post process instances (must be a child of USkeletalMeshComponent) */" },
		{ "ModuleRelativePath", "Public/LevelSequenceBindingReference.h" },
		{ "ToolTip", "A set of object binding IDs that relate to post process instances (must be a child of USkeletalMeshComponent)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BindingIdToReferences_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BindingIdToReferences_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BindingIdToReferences;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimSequenceInstances_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_AnimSequenceInstances;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessInstances_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_PostProcessInstances;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequenceBindingReferences>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_BindingIdToReferences_ValueProp = { "BindingIdToReferences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray, METADATA_PARAMS(0, nullptr) }; // 3841566208
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_BindingIdToReferences_Key_KeyProp = { "BindingIdToReferences_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_BindingIdToReferences = { "BindingIdToReferences", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelSequenceBindingReferences, BindingIdToReferences), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BindingIdToReferences_MetaData), NewProp_BindingIdToReferences_MetaData) }; // 3841566208
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_AnimSequenceInstances_ElementProp = { "AnimSequenceInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
static_assert(TModels_V<CGetTypeHashable, FGuid>, "The structure 'FGuid' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_AnimSequenceInstances = { "AnimSequenceInstances", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelSequenceBindingReferences, AnimSequenceInstances), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimSequenceInstances_MetaData), NewProp_AnimSequenceInstances_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_PostProcessInstances_ElementProp = { "PostProcessInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
static_assert(TModels_V<CGetTypeHashable, FGuid>, "The structure 'FGuid' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_PostProcessInstances = { "PostProcessInstances", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelSequenceBindingReferences, PostProcessInstances), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessInstances_MetaData), NewProp_PostProcessInstances_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_BindingIdToReferences_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_BindingIdToReferences_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_BindingIdToReferences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_AnimSequenceInstances_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_AnimSequenceInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_PostProcessInstances_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_PostProcessInstances,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	nullptr,
	&NewStructOps,
	"LevelSequenceBindingReferences",
	Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::PropPointers),
	sizeof(FLevelSequenceBindingReferences),
	alignof(FLevelSequenceBindingReferences),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceBindingReferences()
{
	if (!Z_Registration_Info_UScriptStruct_LevelSequenceBindingReferences.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelSequenceBindingReferences.InnerSingleton, Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LevelSequenceBindingReferences.InnerSingleton;
}
// End ScriptStruct FLevelSequenceBindingReferences

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBindingReference_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLevelSequenceBindingReference::StaticStruct, Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewStructOps, TEXT("LevelSequenceBindingReference"), &Z_Registration_Info_UScriptStruct_LevelSequenceBindingReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelSequenceBindingReference), 4208529082U) },
		{ FLevelSequenceBindingReferenceArray::StaticStruct, Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::NewStructOps, TEXT("LevelSequenceBindingReferenceArray"), &Z_Registration_Info_UScriptStruct_LevelSequenceBindingReferenceArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelSequenceBindingReferenceArray), 3841566208U) },
		{ FUpgradedLevelSequenceBindingReferences::StaticStruct, Z_Construct_UScriptStruct_FUpgradedLevelSequenceBindingReferences_Statics::NewStructOps, TEXT("UpgradedLevelSequenceBindingReferences"), &Z_Registration_Info_UScriptStruct_UpgradedLevelSequenceBindingReferences, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUpgradedLevelSequenceBindingReferences), 1454285492U) },
		{ FLevelSequenceBindingReferences::StaticStruct, Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewStructOps, TEXT("LevelSequenceBindingReferences"), &Z_Registration_Info_UScriptStruct_LevelSequenceBindingReferences, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelSequenceBindingReferences), 648051720U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBindingReference_h_1626353045(TEXT("/Script/LevelSequence"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBindingReference_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBindingReference_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
