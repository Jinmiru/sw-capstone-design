// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosCaching/Public/Chaos/ChaosCache.h"
#include "ChaosCaching/Public/Chaos/CacheEvents.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosCache() {}

// Begin Cross Module References
CHAOSCACHING_API UClass* Z_Construct_UClass_UChaosCache();
CHAOSCACHING_API UClass* Z_Construct_UClass_UChaosCache_NoRegister();
CHAOSCACHING_API UScriptStruct* Z_Construct_UScriptStruct_FCacheEventTrack();
CHAOSCACHING_API UScriptStruct* Z_Construct_UScriptStruct_FCacheSpawnableTemplate();
CHAOSCACHING_API UScriptStruct* Z_Construct_UScriptStruct_FCompressedRichCurves();
CHAOSCACHING_API UScriptStruct* Z_Construct_UScriptStruct_FParticleTransformTrack();
CHAOSCACHING_API UScriptStruct* Z_Construct_UScriptStruct_FPerParticleCacheData();
CHAOSCACHING_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurves();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCompressedRichCurve();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawAnimSequenceTrack();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
UPackage* Z_Construct_UPackage__Script_ChaosCaching();
// End Cross Module References

// Begin ScriptStruct FParticleTransformTrack
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ParticleTransformTrack;
class UScriptStruct* FParticleTransformTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ParticleTransformTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ParticleTransformTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleTransformTrack, (UObject*)Z_Construct_UPackage__Script_ChaosCaching(), TEXT("ParticleTransformTrack"));
	}
	return Z_Registration_Info_UScriptStruct_ParticleTransformTrack.OuterSingleton;
}
template<> CHAOSCACHING_API UScriptStruct* StaticStruct<FParticleTransformTrack>()
{
	return FParticleTransformTrack::StaticStruct();
}
struct Z_Construct_UScriptStruct_FParticleTransformTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RawTransformTrack_MetaData[] = {
		{ "Comment", "/**\n\x09 * List of all the transforms this cache cares about, recorded from the simulated transforms of the particles\n\x09 * observed by the adapter that created the cache\n\x09 */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
		{ "ToolTip", "List of all the transforms this cache cares about, recorded from the simulated transforms of the particles\nobserved by the adapter that created the cache" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeginOffset_MetaData[] = {
		{ "Comment", "/** The offset from the beginning of the cache that holds this track that the track starts */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
		{ "ToolTip", "The offset from the beginning of the cache that holds this track that the track starts" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDeactivateOnEnd_MetaData[] = {
		{ "Comment", "/** If this flag is set true, the particle represented by this track deactives on the final keyframe. */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
		{ "ToolTip", "If this flag is set true, the particle represented by this track deactives on the final keyframe." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyTimestamps_MetaData[] = {
		{ "Comment", "/**\n\x09 * The above raw track is just the key data and doesn't know at which time those keys are placed, this is\n\x09 * a list of the timestamps for each entry in TransformTrack\n\x09 */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
		{ "ToolTip", "The above raw track is just the key data and doesn't know at which time those keys are placed, this is\na list of the timestamps for each entry in TransformTrack" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RawTransformTrack;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BeginOffset;
	static void NewProp_bDeactivateOnEnd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeactivateOnEnd;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_KeyTimestamps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyTimestamps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleTransformTrack>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewProp_RawTransformTrack = { "RawTransformTrack", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParticleTransformTrack, RawTransformTrack), Z_Construct_UScriptStruct_FRawAnimSequenceTrack, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RawTransformTrack_MetaData), NewProp_RawTransformTrack_MetaData) }; // 3047033106
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewProp_BeginOffset = { "BeginOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParticleTransformTrack, BeginOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeginOffset_MetaData), NewProp_BeginOffset_MetaData) };
void Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewProp_bDeactivateOnEnd_SetBit(void* Obj)
{
	((FParticleTransformTrack*)Obj)->bDeactivateOnEnd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewProp_bDeactivateOnEnd = { "bDeactivateOnEnd", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FParticleTransformTrack), &Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewProp_bDeactivateOnEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDeactivateOnEnd_MetaData), NewProp_bDeactivateOnEnd_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewProp_KeyTimestamps_Inner = { "KeyTimestamps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewProp_KeyTimestamps = { "KeyTimestamps", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParticleTransformTrack, KeyTimestamps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyTimestamps_MetaData), NewProp_KeyTimestamps_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewProp_RawTransformTrack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewProp_BeginOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewProp_bDeactivateOnEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewProp_KeyTimestamps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewProp_KeyTimestamps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosCaching,
	nullptr,
	&NewStructOps,
	"ParticleTransformTrack",
	Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::PropPointers),
	sizeof(FParticleTransformTrack),
	alignof(FParticleTransformTrack),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FParticleTransformTrack()
{
	if (!Z_Registration_Info_UScriptStruct_ParticleTransformTrack.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ParticleTransformTrack.InnerSingleton, Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ParticleTransformTrack.InnerSingleton;
}
// End ScriptStruct FParticleTransformTrack

// Begin ScriptStruct FPerParticleCacheData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PerParticleCacheData;
class UScriptStruct* FPerParticleCacheData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PerParticleCacheData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PerParticleCacheData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerParticleCacheData, (UObject*)Z_Construct_UPackage__Script_ChaosCaching(), TEXT("PerParticleCacheData"));
	}
	return Z_Registration_Info_UScriptStruct_PerParticleCacheData.OuterSingleton;
}
template<> CHAOSCACHING_API UScriptStruct* StaticStruct<FPerParticleCacheData>()
{
	return FPerParticleCacheData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPerParticleCacheData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveData_MetaData[] = {
		{ "Comment", "/**\n\x09 * Named curve data. This can be particle or other continuous curve data pushed by the adapter that created the\n\x09 * cache. Any particle property outside of the transforms will be placed in this container with a suitable name for\n\x09 * the property. Blueprints and adapters can add whatever data they need to this container.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
		{ "ToolTip", "Named curve data. This can be particle or other continuous curve data pushed by the adapter that created the\ncache. Any particle property outside of the transforms will be placed in this container with a suitable name for\nthe property. Blueprints and adapters can add whatever data they need to this container." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurveData_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurveData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CurveData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerParticleCacheData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::NewProp_TransformData = { "TransformData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerParticleCacheData, TransformData), Z_Construct_UScriptStruct_FParticleTransformTrack, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformData_MetaData), NewProp_TransformData_MetaData) }; // 3604542708
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::NewProp_CurveData_ValueProp = { "CurveData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(0, nullptr) }; // 1340883375
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::NewProp_CurveData_Key_KeyProp = { "CurveData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::NewProp_CurveData = { "CurveData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerParticleCacheData, CurveData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveData_MetaData), NewProp_CurveData_MetaData) }; // 1340883375
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::NewProp_TransformData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::NewProp_CurveData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::NewProp_CurveData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::NewProp_CurveData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosCaching,
	nullptr,
	&NewStructOps,
	"PerParticleCacheData",
	Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::PropPointers),
	sizeof(FPerParticleCacheData),
	alignof(FPerParticleCacheData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPerParticleCacheData()
{
	if (!Z_Registration_Info_UScriptStruct_PerParticleCacheData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PerParticleCacheData.InnerSingleton, Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PerParticleCacheData.InnerSingleton;
}
// End ScriptStruct FPerParticleCacheData

// Begin ScriptStruct FCacheSpawnableTemplate
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CacheSpawnableTemplate;
class UScriptStruct* FCacheSpawnableTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CacheSpawnableTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CacheSpawnableTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCacheSpawnableTemplate, (UObject*)Z_Construct_UPackage__Script_ChaosCaching(), TEXT("CacheSpawnableTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_CacheSpawnableTemplate.OuterSingleton;
}
template<> CHAOSCACHING_API UScriptStruct* StaticStruct<FCacheSpawnableTemplate>()
{
	return FCacheSpawnableTemplate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DuplicatedTemplate_MetaData[] = {
		{ "Category", "Caching" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialTransform_MetaData[] = {
		{ "Category", "Caching" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentTransform_MetaData[] = {
		{ "Category", "Caching" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DuplicatedTemplate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCacheSpawnableTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::NewProp_DuplicatedTemplate = { "DuplicatedTemplate", nullptr, (EPropertyFlags)0x0114000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCacheSpawnableTemplate, DuplicatedTemplate), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DuplicatedTemplate_MetaData), NewProp_DuplicatedTemplate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::NewProp_InitialTransform = { "InitialTransform", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCacheSpawnableTemplate, InitialTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialTransform_MetaData), NewProp_InitialTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::NewProp_ComponentTransform = { "ComponentTransform", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCacheSpawnableTemplate, ComponentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentTransform_MetaData), NewProp_ComponentTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::NewProp_DuplicatedTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::NewProp_InitialTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::NewProp_ComponentTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosCaching,
	nullptr,
	&NewStructOps,
	"CacheSpawnableTemplate",
	Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::PropPointers),
	sizeof(FCacheSpawnableTemplate),
	alignof(FCacheSpawnableTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCacheSpawnableTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_CacheSpawnableTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CacheSpawnableTemplate.InnerSingleton, Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CacheSpawnableTemplate.InnerSingleton;
}
// End ScriptStruct FCacheSpawnableTemplate

// Begin ScriptStruct FRichCurves
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RichCurves;
class UScriptStruct* FRichCurves::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RichCurves.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RichCurves.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRichCurves, (UObject*)Z_Construct_UPackage__Script_ChaosCaching(), TEXT("RichCurves"));
	}
	return Z_Registration_Info_UScriptStruct_RichCurves.OuterSingleton;
}
template<> CHAOSCACHING_API UScriptStruct* StaticStruct<FRichCurves>()
{
	return FRichCurves::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRichCurves_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RichCurves_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RichCurves_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RichCurves;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRichCurves>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRichCurves_Statics::NewProp_RichCurves_Inner = { "RichCurves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(0, nullptr) }; // 1340883375
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRichCurves_Statics::NewProp_RichCurves = { "RichCurves", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRichCurves, RichCurves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RichCurves_MetaData), NewProp_RichCurves_MetaData) }; // 1340883375
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRichCurves_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichCurves_Statics::NewProp_RichCurves_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichCurves_Statics::NewProp_RichCurves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichCurves_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRichCurves_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosCaching,
	nullptr,
	&NewStructOps,
	"RichCurves",
	Z_Construct_UScriptStruct_FRichCurves_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichCurves_Statics::PropPointers),
	sizeof(FRichCurves),
	alignof(FRichCurves),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichCurves_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRichCurves_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRichCurves()
{
	if (!Z_Registration_Info_UScriptStruct_RichCurves.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RichCurves.InnerSingleton, Z_Construct_UScriptStruct_FRichCurves_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RichCurves.InnerSingleton;
}
// End ScriptStruct FRichCurves

// Begin ScriptStruct FCompressedRichCurves
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CompressedRichCurves;
class UScriptStruct* FCompressedRichCurves::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CompressedRichCurves.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CompressedRichCurves.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompressedRichCurves, (UObject*)Z_Construct_UPackage__Script_ChaosCaching(), TEXT("CompressedRichCurves"));
	}
	return Z_Registration_Info_UScriptStruct_CompressedRichCurves.OuterSingleton;
}
template<> CHAOSCACHING_API UScriptStruct* StaticStruct<FCompressedRichCurves>()
{
	return FCompressedRichCurves::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCompressedRichCurves_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressedRichCurves_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CompressedRichCurves_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CompressedRichCurves;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompressedRichCurves>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompressedRichCurves_Statics::NewProp_CompressedRichCurves_Inner = { "CompressedRichCurves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCompressedRichCurve, METADATA_PARAMS(0, nullptr) }; // 4023156191
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCompressedRichCurves_Statics::NewProp_CompressedRichCurves = { "CompressedRichCurves", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompressedRichCurves, CompressedRichCurves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressedRichCurves_MetaData), NewProp_CompressedRichCurves_MetaData) }; // 4023156191
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompressedRichCurves_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompressedRichCurves_Statics::NewProp_CompressedRichCurves_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompressedRichCurves_Statics::NewProp_CompressedRichCurves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompressedRichCurves_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompressedRichCurves_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosCaching,
	nullptr,
	&NewStructOps,
	"CompressedRichCurves",
	Z_Construct_UScriptStruct_FCompressedRichCurves_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompressedRichCurves_Statics::PropPointers),
	sizeof(FCompressedRichCurves),
	alignof(FCompressedRichCurves),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompressedRichCurves_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCompressedRichCurves_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCompressedRichCurves()
{
	if (!Z_Registration_Info_UScriptStruct_CompressedRichCurves.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CompressedRichCurves.InnerSingleton, Z_Construct_UScriptStruct_FCompressedRichCurves_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CompressedRichCurves.InnerSingleton;
}
// End ScriptStruct FCompressedRichCurves

// Begin Class UChaosCache
void UChaosCache::StaticRegisterNativesUChaosCache()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosCache);
UClass* Z_Construct_UClass_UChaosCache_NoRegister()
{
	return UChaosCache::StaticClass();
}
struct Z_Construct_UClass_UChaosCache_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Chaos/ChaosCache.h" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecordedDuration_MetaData[] = {
		{ "Category", "Caching" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumRecordedFrames_MetaData[] = {
		{ "Category", "Caching" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackToParticle_MetaData[] = {
		{ "Comment", "/** Maps a track index in the cache to the original particle index specified when recording */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
		{ "ToolTip", "Maps a track index in the cache to the original particle index specified when recording" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleTracks_MetaData[] = {
		{ "Comment", "/** Per-particle data, includes transforms, velocities and other per-particle, per-frame data */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
		{ "ToolTip", "Per-particle data, includes transforms, velocities and other per-particle, per-frame data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelCurveToParticle_MetaData[] = {
		{ "Comment", "/** Map a curve index in the cache to the original particle index specified when recording */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
		{ "ToolTip", "Map a curve index in the cache to the original particle index specified when recording" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelsTracks_MetaData[] = {
		{ "Comment", "/** Per-particle data,  continuous per-frame data */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
		{ "ToolTip", "Per-particle data,  continuous per-frame data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressedChannelsTracks_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveData_MetaData[] = {
		{ "Comment", "/** Per component/cache curve data, any continuous data that isn't per-particle can be stored here */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
		{ "ToolTip", "Per component/cache curve data, any continuous data that isn't per-particle can be stored here" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NamedTransformTracks_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCompressChannels_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelsCompressionErrorThreshold_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelsCompressionSampleRate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTracks_MetaData[] = {
		{ "Comment", "/** Timestamped generic event tracks */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
		{ "ToolTip", "Timestamped generic event tracks" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spawnable_MetaData[] = {
		{ "Category", "Caching" },
		{ "Comment", "/** Spawn template for an actor that can play this cache */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
		{ "ToolTip", "Spawn template for an actor that can play this cache" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdapterGuid_MetaData[] = {
		{ "Comment", "/** GUID identifier for the adapter that spawned this cache */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
		{ "ToolTip", "GUID identifier for the adapter that spawned this cache" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Comment", "/** Version for controlling conditioning of older caches to work with current system. Newly created caches should always be saved as CurrentVersion. */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
		{ "ToolTip", "Version for controlling conditioning of older caches to work with current system. Newly created caches should always be saved as CurrentVersion." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecordedDuration;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumRecordedFrames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TrackToParticle_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackToParticle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleTracks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParticleTracks;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelCurveToParticle_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChannelCurveToParticle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelsTracks_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ChannelsTracks_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ChannelsTracks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CompressedChannelsTracks_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CompressedChannelsTracks_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CompressedChannelsTracks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurveData_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurveData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CurveData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NamedTransformTracks_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NamedTransformTracks_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NamedTransformTracks;
	static void NewProp_bCompressChannels_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompressChannels;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChannelsCompressionErrorThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChannelsCompressionSampleRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTracks_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EventTracks_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EventTracks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spawnable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdapterGuid;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosCache>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_RecordedDuration = { "RecordedDuration", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosCache, RecordedDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecordedDuration_MetaData), NewProp_RecordedDuration_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_NumRecordedFrames = { "NumRecordedFrames", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosCache, NumRecordedFrames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumRecordedFrames_MetaData), NewProp_NumRecordedFrames_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_TrackToParticle_Inner = { "TrackToParticle", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_TrackToParticle = { "TrackToParticle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosCache, TrackToParticle), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackToParticle_MetaData), NewProp_TrackToParticle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_ParticleTracks_Inner = { "ParticleTracks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPerParticleCacheData, METADATA_PARAMS(0, nullptr) }; // 3732125474
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_ParticleTracks = { "ParticleTracks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosCache, ParticleTracks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleTracks_MetaData), NewProp_ParticleTracks_MetaData) }; // 3732125474
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_ChannelCurveToParticle_Inner = { "ChannelCurveToParticle", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_ChannelCurveToParticle = { "ChannelCurveToParticle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosCache, ChannelCurveToParticle), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelCurveToParticle_MetaData), NewProp_ChannelCurveToParticle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_ChannelsTracks_ValueProp = { "ChannelsTracks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FRichCurves, METADATA_PARAMS(0, nullptr) }; // 4079873130
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_ChannelsTracks_Key_KeyProp = { "ChannelsTracks_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_ChannelsTracks = { "ChannelsTracks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosCache, ChannelsTracks), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelsTracks_MetaData), NewProp_ChannelsTracks_MetaData) }; // 4079873130
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_CompressedChannelsTracks_ValueProp = { "CompressedChannelsTracks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCompressedRichCurves, METADATA_PARAMS(0, nullptr) }; // 1378171596
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_CompressedChannelsTracks_Key_KeyProp = { "CompressedChannelsTracks_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_CompressedChannelsTracks = { "CompressedChannelsTracks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosCache, CompressedChannelsTracks), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressedChannelsTracks_MetaData), NewProp_CompressedChannelsTracks_MetaData) }; // 1378171596
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_CurveData_ValueProp = { "CurveData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(0, nullptr) }; // 1340883375
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_CurveData_Key_KeyProp = { "CurveData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_CurveData = { "CurveData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosCache, CurveData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveData_MetaData), NewProp_CurveData_MetaData) }; // 1340883375
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_NamedTransformTracks_ValueProp = { "NamedTransformTracks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FParticleTransformTrack, METADATA_PARAMS(0, nullptr) }; // 3604542708
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_NamedTransformTracks_Key_KeyProp = { "NamedTransformTracks_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_NamedTransformTracks = { "NamedTransformTracks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosCache, NamedTransformTracks), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NamedTransformTracks_MetaData), NewProp_NamedTransformTracks_MetaData) }; // 3604542708
void Z_Construct_UClass_UChaosCache_Statics::NewProp_bCompressChannels_SetBit(void* Obj)
{
	((UChaosCache*)Obj)->bCompressChannels = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_bCompressChannels = { "bCompressChannels", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UChaosCache), &Z_Construct_UClass_UChaosCache_Statics::NewProp_bCompressChannels_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCompressChannels_MetaData), NewProp_bCompressChannels_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_ChannelsCompressionErrorThreshold = { "ChannelsCompressionErrorThreshold", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosCache, ChannelsCompressionErrorThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelsCompressionErrorThreshold_MetaData), NewProp_ChannelsCompressionErrorThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_ChannelsCompressionSampleRate = { "ChannelsCompressionSampleRate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosCache, ChannelsCompressionSampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelsCompressionSampleRate_MetaData), NewProp_ChannelsCompressionSampleRate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_EventTracks_ValueProp = { "EventTracks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCacheEventTrack, METADATA_PARAMS(0, nullptr) }; // 2878169787
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_EventTracks_Key_KeyProp = { "EventTracks_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_EventTracks = { "EventTracks", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosCache, EventTracks), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTracks_MetaData), NewProp_EventTracks_MetaData) }; // 2878169787
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_Spawnable = { "Spawnable", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosCache, Spawnable), Z_Construct_UScriptStruct_FCacheSpawnableTemplate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spawnable_MetaData), NewProp_Spawnable_MetaData) }; // 1039290700
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_AdapterGuid = { "AdapterGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosCache, AdapterGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdapterGuid_MetaData), NewProp_AdapterGuid_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosCache, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChaosCache_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_RecordedDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_NumRecordedFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_TrackToParticle_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_TrackToParticle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_ParticleTracks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_ParticleTracks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_ChannelCurveToParticle_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_ChannelCurveToParticle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_ChannelsTracks_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_ChannelsTracks_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_ChannelsTracks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_CompressedChannelsTracks_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_CompressedChannelsTracks_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_CompressedChannelsTracks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_CurveData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_CurveData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_CurveData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_NamedTransformTracks_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_NamedTransformTracks_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_NamedTransformTracks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_bCompressChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_ChannelsCompressionErrorThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_ChannelsCompressionSampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_EventTracks_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_EventTracks_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_EventTracks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_Spawnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_AdapterGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_Version,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosCache_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UChaosCache_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosCaching,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosCache_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosCache_Statics::ClassParams = {
	&UChaosCache::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UChaosCache_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UChaosCache_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosCache_Statics::Class_MetaDataParams), Z_Construct_UClass_UChaosCache_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UChaosCache()
{
	if (!Z_Registration_Info_UClass_UChaosCache.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosCache.OuterSingleton, Z_Construct_UClass_UChaosCache_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UChaosCache.OuterSingleton;
}
template<> CHAOSCACHING_API UClass* StaticClass<UChaosCache>()
{
	return UChaosCache::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosCache);
UChaosCache::~UChaosCache() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UChaosCache)
// End Class UChaosCache

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCache_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FParticleTransformTrack::StaticStruct, Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewStructOps, TEXT("ParticleTransformTrack"), &Z_Registration_Info_UScriptStruct_ParticleTransformTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParticleTransformTrack), 3604542708U) },
		{ FPerParticleCacheData::StaticStruct, Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::NewStructOps, TEXT("PerParticleCacheData"), &Z_Registration_Info_UScriptStruct_PerParticleCacheData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPerParticleCacheData), 3732125474U) },
		{ FCacheSpawnableTemplate::StaticStruct, Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::NewStructOps, TEXT("CacheSpawnableTemplate"), &Z_Registration_Info_UScriptStruct_CacheSpawnableTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCacheSpawnableTemplate), 1039290700U) },
		{ FRichCurves::StaticStruct, Z_Construct_UScriptStruct_FRichCurves_Statics::NewStructOps, TEXT("RichCurves"), &Z_Registration_Info_UScriptStruct_RichCurves, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRichCurves), 4079873130U) },
		{ FCompressedRichCurves::StaticStruct, Z_Construct_UScriptStruct_FCompressedRichCurves_Statics::NewStructOps, TEXT("CompressedRichCurves"), &Z_Registration_Info_UScriptStruct_CompressedRichCurves, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompressedRichCurves), 1378171596U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UChaosCache, UChaosCache::StaticClass, TEXT("UChaosCache"), &Z_Registration_Info_UClass_UChaosCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosCache), 1984570935U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCache_h_4163113981(TEXT("/Script/ChaosCaching"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCache_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCache_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCache_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCache_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
