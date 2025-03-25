// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LevelSequence/Public/LevelSequenceObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceObject();
UPackage* Z_Construct_UPackage__Script_LevelSequence();
// End Cross Module References

// Begin ScriptStruct FLevelSequenceObject
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelSequenceObject;
class UScriptStruct* FLevelSequenceObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelSequenceObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelSequenceObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceObject, (UObject*)Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceObject"));
	}
	return Z_Registration_Info_UScriptStruct_LevelSequenceObject.OuterSingleton;
}
template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<FLevelSequenceObject>()
{
	return FLevelSequenceObject::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLevelSequenceObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure for animated Actor objects.\n */" },
		{ "ModuleRelativePath", "Public/LevelSequenceObject.h" },
		{ "ToolTip", "Structure for animated Actor objects." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectOrOwner_MetaData[] = {
		{ "Comment", "/** The object or the owner of the object being possessed. */" },
		{ "ModuleRelativePath", "Public/LevelSequenceObject.h" },
		{ "ToolTip", "The object or the owner of the object being possessed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[] = {
		{ "Comment", "/** Optional name of an ActorComponent. */" },
		{ "ModuleRelativePath", "Public/LevelSequenceObject.h" },
		{ "ToolTip", "Optional name of an ActorComponent." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedComponent_MetaData[] = {
		{ "Comment", "/** Cached pointer to the Actor component (only if ComponentName is set). */" },
		{ "ModuleRelativePath", "Public/LevelSequenceObject.h" },
		{ "ToolTip", "Cached pointer to the Actor component (only if ComponentName is set)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_ObjectOrOwner;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ComponentName;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CachedComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequenceObject>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewProp_ObjectOrOwner = { "ObjectOrOwner", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelSequenceObject, ObjectOrOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectOrOwner_MetaData), NewProp_ObjectOrOwner_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelSequenceObject, ComponentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentName_MetaData), NewProp_ComponentName_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewProp_CachedComponent = { "CachedComponent", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelSequenceObject, CachedComponent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedComponent_MetaData), NewProp_CachedComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewProp_ObjectOrOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewProp_ComponentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewProp_CachedComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	nullptr,
	&NewStructOps,
	"LevelSequenceObject",
	Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::PropPointers),
	sizeof(FLevelSequenceObject),
	alignof(FLevelSequenceObject),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceObject()
{
	if (!Z_Registration_Info_UScriptStruct_LevelSequenceObject.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelSequenceObject.InnerSingleton, Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LevelSequenceObject.InnerSingleton;
}
// End ScriptStruct FLevelSequenceObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceObject_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLevelSequenceObject::StaticStruct, Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewStructOps, TEXT("LevelSequenceObject"), &Z_Registration_Info_UScriptStruct_LevelSequenceObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelSequenceObject), 23658395U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceObject_h_3289441027(TEXT("/Script/LevelSequence"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceObject_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
