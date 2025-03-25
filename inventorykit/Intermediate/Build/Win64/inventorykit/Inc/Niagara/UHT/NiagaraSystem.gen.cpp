// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraSystem.h"
#include "Niagara/Classes/NiagaraDataSetCompiledData.h"
#include "Niagara/Classes/NiagaraEffectType.h"
#include "Niagara/Classes/NiagaraEmitterHandle.h"
#include "Niagara/Classes/NiagaraParameterDefinitionsSubscriber.h"
#include "Niagara/Classes/NiagaraPlatformSet.h"
#include "Niagara/Internal/NiagaraSystemEmitterState.h"
#include "Niagara/Public/NiagaraAssetTagDefinitions.h"
#include "Niagara/Public/NiagaraCommon.h"
#include "Niagara/Public/NiagaraMessageStore.h"
#include "Niagara/Public/NiagaraParameterStore.h"
#include "Niagara/Public/NiagaraTypes.h"
#include "Niagara/Public/NiagaraUserRedirectionParameterStore.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraSystem() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UFXSystemAsset();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERendererStencilMask();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBakerSettings_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEditorDataBase_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEditorParametersAdapterBase_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEffectType_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraMessageDataBase_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParameterCollectionInstance_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScript_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptTemplateSpecification();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraAssetTagDefinitionReference();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterHandle();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMessageStore();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterStore();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPlatformSet();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemCompiledData();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemStateData();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FParameterDefinitionsSubscription();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin ScriptStruct FNiagaraEmitterCompiledData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraEmitterCompiledData;
class UScriptStruct* FNiagaraEmitterCompiledData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraEmitterCompiledData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraEmitterCompiledData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraEmitterCompiledData"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraEmitterCompiledData.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraEmitterCompiledData>()
{
	return FNiagaraEmitterCompiledData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnAttributes_MetaData[] = {
		{ "Comment", "/** Attribute names in the data set that are driving each emitter's spawning. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Attribute names in the data set that are driving each emitter's spawning." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmitterSpawnIntervalVar_MetaData[] = {
		{ "Comment", "/** Explicit list of Niagara Variables to bind to Emitter instances. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Explicit list of Niagara Variables to bind to Emitter instances." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmitterInterpSpawnStartDTVar_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmitterSpawnGroupVar_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmitterAgeVar_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmitterRandomSeedVar_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmitterInstanceSeedVar_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmitterTotalSpawnedParticlesVar_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataSetCompiledData_MetaData[] = {
		{ "Comment", "/** Per-Emitter DataSet Data. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Per-Emitter DataSet Data." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpawnAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnAttributes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterSpawnIntervalVar;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterInterpSpawnStartDTVar;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterSpawnGroupVar;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterAgeVar;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterRandomSeedVar;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterInstanceSeedVar;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterTotalSpawnedParticlesVar;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataSetCompiledData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraEmitterCompiledData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_SpawnAttributes_Inner = { "SpawnAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_SpawnAttributes = { "SpawnAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEmitterCompiledData, SpawnAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnAttributes_MetaData), NewProp_SpawnAttributes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterSpawnIntervalVar = { "EmitterSpawnIntervalVar", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEmitterCompiledData, EmitterSpawnIntervalVar), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmitterSpawnIntervalVar_MetaData), NewProp_EmitterSpawnIntervalVar_MetaData) }; // 2475164134
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterInterpSpawnStartDTVar = { "EmitterInterpSpawnStartDTVar", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEmitterCompiledData, EmitterInterpSpawnStartDTVar), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmitterInterpSpawnStartDTVar_MetaData), NewProp_EmitterInterpSpawnStartDTVar_MetaData) }; // 2475164134
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterSpawnGroupVar = { "EmitterSpawnGroupVar", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEmitterCompiledData, EmitterSpawnGroupVar), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmitterSpawnGroupVar_MetaData), NewProp_EmitterSpawnGroupVar_MetaData) }; // 2475164134
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterAgeVar = { "EmitterAgeVar", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEmitterCompiledData, EmitterAgeVar), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmitterAgeVar_MetaData), NewProp_EmitterAgeVar_MetaData) }; // 2475164134
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterRandomSeedVar = { "EmitterRandomSeedVar", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEmitterCompiledData, EmitterRandomSeedVar), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmitterRandomSeedVar_MetaData), NewProp_EmitterRandomSeedVar_MetaData) }; // 2475164134
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterInstanceSeedVar = { "EmitterInstanceSeedVar", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEmitterCompiledData, EmitterInstanceSeedVar), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmitterInstanceSeedVar_MetaData), NewProp_EmitterInstanceSeedVar_MetaData) }; // 2475164134
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterTotalSpawnedParticlesVar = { "EmitterTotalSpawnedParticlesVar", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEmitterCompiledData, EmitterTotalSpawnedParticlesVar), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmitterTotalSpawnedParticlesVar_MetaData), NewProp_EmitterTotalSpawnedParticlesVar_MetaData) }; // 2475164134
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_DataSetCompiledData = { "DataSetCompiledData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEmitterCompiledData, DataSetCompiledData), Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataSetCompiledData_MetaData), NewProp_DataSetCompiledData_MetaData) }; // 3790253218
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_SpawnAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_SpawnAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterSpawnIntervalVar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterInterpSpawnStartDTVar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterSpawnGroupVar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterAgeVar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterRandomSeedVar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterInstanceSeedVar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterTotalSpawnedParticlesVar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_DataSetCompiledData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraEmitterCompiledData",
	Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::PropPointers),
	sizeof(FNiagaraEmitterCompiledData),
	alignof(FNiagaraEmitterCompiledData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraEmitterCompiledData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraEmitterCompiledData.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraEmitterCompiledData.InnerSingleton;
}
// End ScriptStruct FNiagaraEmitterCompiledData

// Begin ScriptStruct FNiagaraParameterDataSetBinding
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraParameterDataSetBinding;
class UScriptStruct* FNiagaraParameterDataSetBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraParameterDataSetBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraParameterDataSetBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraParameterDataSetBinding"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraParameterDataSetBinding.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraParameterDataSetBinding>()
{
	return FNiagaraParameterDataSetBinding::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataSetComponentOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParameterOffset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DataSetComponentOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraParameterDataSetBinding>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::NewProp_ParameterOffset = { "ParameterOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraParameterDataSetBinding, ParameterOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterOffset_MetaData), NewProp_ParameterOffset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::NewProp_DataSetComponentOffset = { "DataSetComponentOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraParameterDataSetBinding, DataSetComponentOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataSetComponentOffset_MetaData), NewProp_DataSetComponentOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::NewProp_ParameterOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::NewProp_DataSetComponentOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraParameterDataSetBinding",
	Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::PropPointers),
	sizeof(FNiagaraParameterDataSetBinding),
	alignof(FNiagaraParameterDataSetBinding),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraParameterDataSetBinding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraParameterDataSetBinding.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraParameterDataSetBinding.InnerSingleton;
}
// End ScriptStruct FNiagaraParameterDataSetBinding

// Begin ScriptStruct FNiagaraParameterDataSetBindingCollection
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraParameterDataSetBindingCollection;
class UScriptStruct* FNiagaraParameterDataSetBindingCollection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraParameterDataSetBindingCollection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraParameterDataSetBindingCollection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraParameterDataSetBindingCollection"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraParameterDataSetBindingCollection.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraParameterDataSetBindingCollection>()
{
	return FNiagaraParameterDataSetBindingCollection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatOffsets_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Int32Offsets_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloatOffsets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatOffsets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Int32Offsets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Int32Offsets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraParameterDataSetBindingCollection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewProp_FloatOffsets_Inner = { "FloatOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding, METADATA_PARAMS(0, nullptr) }; // 2533092139
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewProp_FloatOffsets = { "FloatOffsets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraParameterDataSetBindingCollection, FloatOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatOffsets_MetaData), NewProp_FloatOffsets_MetaData) }; // 2533092139
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewProp_Int32Offsets_Inner = { "Int32Offsets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding, METADATA_PARAMS(0, nullptr) }; // 2533092139
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewProp_Int32Offsets = { "Int32Offsets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraParameterDataSetBindingCollection, Int32Offsets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Int32Offsets_MetaData), NewProp_Int32Offsets_MetaData) }; // 2533092139
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewProp_FloatOffsets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewProp_FloatOffsets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewProp_Int32Offsets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewProp_Int32Offsets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraParameterDataSetBindingCollection",
	Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::PropPointers),
	sizeof(FNiagaraParameterDataSetBindingCollection),
	alignof(FNiagaraParameterDataSetBindingCollection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraParameterDataSetBindingCollection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraParameterDataSetBindingCollection.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraParameterDataSetBindingCollection.InnerSingleton;
}
// End ScriptStruct FNiagaraParameterDataSetBindingCollection

// Begin ScriptStruct FNiagaraSystemCompiledData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraSystemCompiledData;
class UScriptStruct* FNiagaraSystemCompiledData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSystemCompiledData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraSystemCompiledData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSystemCompiledData"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSystemCompiledData.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSystemCompiledData>()
{
	return FNiagaraSystemCompiledData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceParamStore_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataSetCompiledData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnInstanceParamsDataSetCompiledData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateInstanceParamsDataSetCompiledData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnInstanceGlobalBinding_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnInstanceSystemBinding_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnInstanceOwnerBinding_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnInstanceEmitterBindings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateInstanceGlobalBinding_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateInstanceSystemBinding_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateInstanceOwnerBinding_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateInstanceEmitterBindings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceParamStore;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataSetCompiledData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnInstanceParamsDataSetCompiledData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateInstanceParamsDataSetCompiledData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnInstanceGlobalBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnInstanceSystemBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnInstanceOwnerBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnInstanceEmitterBindings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnInstanceEmitterBindings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateInstanceGlobalBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateInstanceSystemBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateInstanceOwnerBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateInstanceEmitterBindings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UpdateInstanceEmitterBindings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSystemCompiledData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_InstanceParamStore = { "InstanceParamStore", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSystemCompiledData, InstanceParamStore), Z_Construct_UScriptStruct_FNiagaraParameterStore, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceParamStore_MetaData), NewProp_InstanceParamStore_MetaData) }; // 3025266078
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_DataSetCompiledData = { "DataSetCompiledData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSystemCompiledData, DataSetCompiledData), Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataSetCompiledData_MetaData), NewProp_DataSetCompiledData_MetaData) }; // 3790253218
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceParamsDataSetCompiledData = { "SpawnInstanceParamsDataSetCompiledData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSystemCompiledData, SpawnInstanceParamsDataSetCompiledData), Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnInstanceParamsDataSetCompiledData_MetaData), NewProp_SpawnInstanceParamsDataSetCompiledData_MetaData) }; // 3790253218
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceParamsDataSetCompiledData = { "UpdateInstanceParamsDataSetCompiledData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSystemCompiledData, UpdateInstanceParamsDataSetCompiledData), Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateInstanceParamsDataSetCompiledData_MetaData), NewProp_UpdateInstanceParamsDataSetCompiledData_MetaData) }; // 3790253218
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceGlobalBinding = { "SpawnInstanceGlobalBinding", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSystemCompiledData, SpawnInstanceGlobalBinding), Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnInstanceGlobalBinding_MetaData), NewProp_SpawnInstanceGlobalBinding_MetaData) }; // 3743659228
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceSystemBinding = { "SpawnInstanceSystemBinding", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSystemCompiledData, SpawnInstanceSystemBinding), Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnInstanceSystemBinding_MetaData), NewProp_SpawnInstanceSystemBinding_MetaData) }; // 3743659228
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceOwnerBinding = { "SpawnInstanceOwnerBinding", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSystemCompiledData, SpawnInstanceOwnerBinding), Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnInstanceOwnerBinding_MetaData), NewProp_SpawnInstanceOwnerBinding_MetaData) }; // 3743659228
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceEmitterBindings_Inner = { "SpawnInstanceEmitterBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection, METADATA_PARAMS(0, nullptr) }; // 3743659228
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceEmitterBindings = { "SpawnInstanceEmitterBindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSystemCompiledData, SpawnInstanceEmitterBindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnInstanceEmitterBindings_MetaData), NewProp_SpawnInstanceEmitterBindings_MetaData) }; // 3743659228
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceGlobalBinding = { "UpdateInstanceGlobalBinding", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSystemCompiledData, UpdateInstanceGlobalBinding), Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateInstanceGlobalBinding_MetaData), NewProp_UpdateInstanceGlobalBinding_MetaData) }; // 3743659228
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceSystemBinding = { "UpdateInstanceSystemBinding", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSystemCompiledData, UpdateInstanceSystemBinding), Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateInstanceSystemBinding_MetaData), NewProp_UpdateInstanceSystemBinding_MetaData) }; // 3743659228
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceOwnerBinding = { "UpdateInstanceOwnerBinding", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSystemCompiledData, UpdateInstanceOwnerBinding), Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateInstanceOwnerBinding_MetaData), NewProp_UpdateInstanceOwnerBinding_MetaData) }; // 3743659228
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceEmitterBindings_Inner = { "UpdateInstanceEmitterBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection, METADATA_PARAMS(0, nullptr) }; // 3743659228
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceEmitterBindings = { "UpdateInstanceEmitterBindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSystemCompiledData, UpdateInstanceEmitterBindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateInstanceEmitterBindings_MetaData), NewProp_UpdateInstanceEmitterBindings_MetaData) }; // 3743659228
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_InstanceParamStore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_DataSetCompiledData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceParamsDataSetCompiledData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceParamsDataSetCompiledData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceGlobalBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceSystemBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceOwnerBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceEmitterBindings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceEmitterBindings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceGlobalBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceSystemBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceOwnerBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceEmitterBindings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceEmitterBindings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraSystemCompiledData",
	Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::PropPointers),
	sizeof(FNiagaraSystemCompiledData),
	alignof(FNiagaraSystemCompiledData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemCompiledData()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSystemCompiledData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraSystemCompiledData.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSystemCompiledData.InnerSingleton;
}
// End ScriptStruct FNiagaraSystemCompiledData

// Begin ScriptStruct FNiagaraSystemScalabilityOverrides
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilityOverrides;
class UScriptStruct* FNiagaraSystemScalabilityOverrides::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilityOverrides.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilityOverrides.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSystemScalabilityOverrides"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilityOverrides.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSystemScalabilityOverrides>()
{
	return FNiagaraSystemScalabilityOverrides::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Container struct for an array of system scalability overrides. Enables details customization and data validation. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Container struct for an array of system scalability overrides. Enables details customization and data validation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Overrides_MetaData[] = {
		{ "Category", "Override" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Overrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Overrides;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSystemScalabilityOverrides>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::NewProp_Overrides_Inner = { "Overrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride, METADATA_PARAMS(0, nullptr) }; // 339833541
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::NewProp_Overrides = { "Overrides", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSystemScalabilityOverrides, Overrides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Overrides_MetaData), NewProp_Overrides_MetaData) }; // 339833541
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::NewProp_Overrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::NewProp_Overrides,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraSystemScalabilityOverrides",
	Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::PropPointers),
	sizeof(FNiagaraSystemScalabilityOverrides),
	alignof(FNiagaraSystemScalabilityOverrides),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilityOverrides.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilityOverrides.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilityOverrides.InnerSingleton;
}
// End ScriptStruct FNiagaraSystemScalabilityOverrides

// Begin Class UNiagaraSystem
void UNiagaraSystem::StaticRegisterNativesUNiagaraSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraSystem);
UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister()
{
	return UNiagaraSystem::StaticClass();
}
struct Z_Construct_UClass_UNiagaraSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A Niagara System contains multiple Niagara Emitters to create various effects.\n * Niagara Systems can be placed in the world, unlike Emitters, and expose User Parameters to configure an effect at runtime.*/" },
		{ "IncludePath", "NiagaraSystem.h" },
		{ "LoadBehavior", "LazyOnDemand" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "A Niagara System contains multiple Niagara Emitters to create various effects.\nNiagara Systems can be placed in the world, unlike Emitters, and expose User Parameters to configure an effect at runtime." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailImage_MetaData[] = {
		{ "Comment", "/** Internal: The thumbnail image.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Internal: The thumbnail image." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExposeToLibrary_MetaData[] = {
		{ "Comment", "/** Deprecated library exposure bool. Use the LibraryVisibility enum instead. FNiagaraEditorUtilities has accessor functions that takes deprecation into account */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Deprecated library exposure bool. Use the LibraryVisibility enum instead. FNiagaraEditorUtilities has accessor functions that takes deprecation into account" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LibraryVisibility_MetaData[] = {
		{ "Comment", "/** If this system is exposed to the library, or should be explicitly hidden. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "SkipSystemResetOnChange", "true" },
		{ "ToolTip", "If this system is exposed to the library, or should be explicitly hidden." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTemplateAsset_MetaData[] = {
		{ "Comment", "/** Deprecated template asset bool. Use the TemplateSpecification enum instead. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Deprecated template asset bool. Use the TemplateSpecification enum instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemplateSpecification_MetaData[] = {
		{ "Comment", "/** If this system is a regular system, a template or a behavior example. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "If this system is a regular system, a template or a behavior example." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemplateAssetDescription_MetaData[] = {
		{ "Category", "Asset Options" },
		{ "DisplayName", "Asset Description" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "SkipSystemResetOnChange", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Comment", "/** Category of this system. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "SkipSystemResetOnChange", "true" },
		{ "ToolTip", "Category of this system." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetTags_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "SkipSystemResetOnChange", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScratchPadScripts_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorOnlyAddedParameters_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateContext_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBakeOutRapidIteration_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** When enable constant values are baked into the scripts while editing the system, this will increase iteration times but improve performance. */" },
		{ "DisplayName", "Bake Rapid Iteration Parameters During Edit" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "When enable constant values are baked into the scripts while editing the system, this will increase iteration times but improve performance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBakeOutRapidIterationOnCook_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** When enabled constant values are baked into scripts to improve performance. */" },
		{ "DisplayName", "Bake Rapid Iteration Parameters" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "When enabled constant values are baked into scripts to improve performance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCompressAttributes_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** Toggles whether or not emitters within this system will try and compress their particle attributes.\n\x09In some cases, this precision change can lead to perceivable differences, but memory costs and or performance (especially true for GPU emitters) can improve. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Toggles whether or not emitters within this system will try and compress their particle attributes.\n      In some cases, this precision change can lead to perceivable differences, but memory costs and or performance (especially true for GPU emitters) can improve." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTrimAttributes_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** When enabled we trim particle attributes while editing the system. */" },
		{ "DisplayName", "Trim Attributes During Edit" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "When enabled we trim particle attributes while editing the system." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTrimAttributesOnCook_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** If true Particle attributes will be removed from the DataSet if they are unnecessary (are never read by ParameterMap) */" },
		{ "DisplayName", "Trim Attributes" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "If true Particle attributes will be removed from the DataSet if they are unnecessary (are never read by ParameterMap)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreParticleReadsForAttributeTrim_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** If true ParticleReads will not absolutely prevent attribute trimming - User must ensure that the appropriate attributes are preserved on the source emitter! */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "If true ParticleReads will not absolutely prevent attribute trimming - User must ensure that the appropriate attributes are preserved on the source emitter!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableDebugSwitches_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** When enable debug switches are disabled while editing the system. */" },
		{ "DisplayName", "Disable Debug Switches During Edit" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "When enable debug switches are disabled while editing the system." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableDebugSwitchesOnCook_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** When enabled debug switches are disabled when compiling the system. */" },
		{ "DisplayName", "Disable Debug Switches" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "When enabled debug switches are disabled when compiling the system." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterDefinitionsSubscriptions_MetaData[] = {
		{ "Comment", "/** Subscriptions to definitions of parameters. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Subscriptions to definitions of parameters." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportLargeWorldCoordinates_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If true then position type values will be rebased on system activation to fit into a float precision vector. This needs to be turned off when using a custom data interface or renderer that does not support the rebasing. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "If true then position type values will be rebased on system activation to fit into a float precision vector. This needs to be turned off when using a custom data interface or renderer that does not support the rebasing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCastShadow_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n// Various optional overrides for component properties when spawning a system\n" },
		{ "InlineEditConditionToggle", "bCastShadow" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Various optional overrides for component properties when spawning a system" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideReceivesDecals_MetaData[] = {
		{ "Category", "Rendering" },
		{ "InlineEditConditionToggle", "bReceivesDecals" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideRenderCustomDepth_MetaData[] = {
		{ "Category", "Rendering" },
		{ "InlineEditConditionToggle", "bRenderCustomDepth" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCustomDepthStencilValue_MetaData[] = {
		{ "Category", "Rendering" },
		{ "InlineEditConditionToggle", "CustomDepthStencilValue" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCustomDepthStencilWriteMask_MetaData[] = {
		{ "Category", "Rendering" },
		{ "InlineEditConditionToggle", "CustomDepthStencilWriteMask" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideTranslucencySortPriority_MetaData[] = {
		{ "Category", "Rendering" },
		{ "InlineEditConditionToggle", "TranslucencySortPriority" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideTranslucencySortDistanceOffset_MetaData[] = {
		{ "Category", "Rendering" },
		{ "InlineEditConditionToggle", "TranslucencySortDistanceOffset" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadow_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09When enabled this is the default value set on the component.\n\x09""Controls whether the primitive component should cast a shadow or not.\n\x09*/" },
		{ "DisplayName", "Default Cast Shadows" },
		{ "EditCondition", "bOverrideCastShadow" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "When enabled this is the default value set on the component.\nControls whether the primitive component should cast a shadow or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReceivesDecals_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09When enabled this is the default value set on the component.\n\x09Whether the primitive receives decals.\n\x09*/" },
		{ "DisplayName", "Default Receives Decals" },
		{ "EditCondition", "bOverrideReceivesDecals" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "When enabled this is the default value set on the component.\nWhether the primitive receives decals." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRenderCustomDepth_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09When enabled this is the default value set on the component.\n\x09This primitive has bRenderCustomDepth enabled.\n\x09*/" },
		{ "DisplayName", "Default Render CustomDepth Pass" },
		{ "EditCondition", "bOverrideRenderCustomDepth" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "When enabled this is the default value set on the component.\nThis primitive has bRenderCustomDepth enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableExperimentalVM_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** If true, disables optimized VM, if available */" },
		{ "DisplayName", "Disable Optimized VM" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "If true, disables optimized VM, if available" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInitialOwnerVelocityFromActor_MetaData[] = {
		{ "Category", "System" },
		{ "Comment", "/*\n\x09When enabled we use the owner actor's velocity for the first frame.\n\x09If we do not have an owner actor, or this is disable then the first frame's velocity will be zero.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "When enabled we use the owner actor's velocity for the first frame.\nIf we do not have an owner actor, or this is disable then the first frame's velocity will be zero." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomDepthStencilWriteMask_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09When enabled this is the default value set on the component.\n\x09Mask used for stencil buffer writes.\n\x09*/" },
		{ "DisplayName", "Default CustomDepthStencil Write Mask" },
		{ "editcondition", "bOverrideCustomDepthStencilValue" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "When enabled this is the default value set on the component.\nMask used for stencil buffer writes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomDepthStencilValue_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09When enabled this is the default value set on the component.\n\x09Optionally write this 0-255 value to the stencil buffer in CustomDepth pass (Requires project setting or r.CustomDepth == 3)\n\x09*/" },
		{ "DisplayName", "Default CustomDepthStencil Value" },
		{ "editcondition", "bOverrideCustomDepthStencilWriteMask" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "When enabled this is the default value set on the component.\nOptionally write this 0-255 value to the stencil buffer in CustomDepth pass (Requires project setting or r.CustomDepth == 3)" },
		{ "UIMax", "255" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslucencySortPriority_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09When enabled this is the default value set on the component.\n\x09""Adjusts the translucent object sorting priority, see PrimitiveComponent description for more details.\n\x09*/" },
		{ "editcondition", "bOverrideTranslucencySortPriority" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "When enabled this is the default value set on the component.\nAdjusts the translucent object sorting priority, see PrimitiveComponent description for more details." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslucencySortDistanceOffset_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09When enabled this is the default value set on the component.\n\x09Modifies the sort distance for translucent objects, see PrimitiveComponent description for more details.\n\x09*/" },
		{ "editcondition", "bOverrideTranslucencySortDistanceOffset" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "When enabled this is the default value set on the component.\nModifies the sort distance for translucent objects, see PrimitiveComponent description for more details." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDumpDebugSystemInfo_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDumpDebugEmitterInfo_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequireCurrentFrameData_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** When enabled, we follow the settings on the UNiagaraComponent for tick order. When this option is disabled, we ignore any dependencies from data interfaces or other variables and instead fire off the simulation as early in the frame as possible. This greatly\n\x09reduces overhead and allows the game thread to run faster, but comes at a tradeoff if the dependencies might leave gaps or other visual artifacts.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "When enabled, we follow the settings on the UNiagaraComponent for tick order. When this option is disabled, we ignore any dependencies from data interfaces or other variables and instead fire off the simulation as early in the frame as possible. This greatly\n      reduces overhead and allows the game thread to run faster, but comes at a tradeoff if the dependencies might leave gaps or other visual artifacts." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFixedBounds_MetaData[] = {
		{ "Category", "System" },
		{ "Comment", "/** Whether or not fixed bounds are enabled. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "SkipSystemResetOnChange", "true" },
		{ "ToolTip", "Whether or not fixed bounds are enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectType_MetaData[] = {
		{ "Category", "System" },
		{ "Comment", "/** An effect types defines settings shared between systems, for example scalability and validation rules.\n\x09 * Things like environment fx usually have a different effect type than gameplay relevant fx such as weapon impacts.\n\x09 * This way whole classes of effects can be adjusted at once. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "An effect types defines settings shared between systems, for example scalability and validation rules.\nThings like environment fx usually have a different effect type than gameplay relevant fx such as weapon impacts.\nThis way whole classes of effects can be adjusted at once." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideScalabilitySettings_MetaData[] = {
		{ "Category", "Scalability" },
		{ "DisplayInScalabilityContext", "" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAllowCullingForLocalPlayers_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** Controls whether we should override the Effect Type value for bAllowCullingForLocalPlayers. */" },
		{ "EditCondition", "bOverrideScalabilitySettings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Controls whether we should override the Effect Type value for bAllowCullingForLocalPlayers." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowCullingForLocalPlayersOverride_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** The override value for bAllowCullingForLocalPlayers from the Effect Type. */" },
		{ "EditCondition", "bOverrideAllowCullingForLocalPlayers" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "The override value for bAllowCullingForLocalPlayers from the Effect Type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SystemScalabilityOverrides_MetaData[] = {
		{ "Category", "Scalability" },
		{ "DisplayInScalabilityContext", "" },
		{ "EditCondition", "bOverrideScalabilitySettings" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Platforms_MetaData[] = {
		{ "Category", "Scalability" },
		{ "DisplayInScalabilityContext", "" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmitterHandles_MetaData[] = {
		{ "Comment", "/** Handles to the emitter this System will simulate. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Handles to the emitter this System will simulate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterCollectionOverrides_MetaData[] = {
		{ "Category", "System" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalabilityOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SystemSpawnScript_MetaData[] = {
		{ "Comment", "/** The script which defines the System parameters, and which generates the bindings from System\n\x09\x09parameter to emitter parameter. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "The script which defines the System parameters, and which generates the bindings from System\n              parameter to emitter parameter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SystemUpdateScript_MetaData[] = {
		{ "Comment", "/** The script which defines the System parameters, and which generates the bindings from System\n\x09parameter to emitter parameter. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "The script which defines the System parameters, and which generates the bindings from System\n      parameter to emitter parameter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SystemCompiledData_MetaData[] = {
		{ "Comment", "//** Post compile generated data used for initializing System Instances during runtime. */\n" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "/ Post compile generated data used for initializing System Instances during runtime." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExposedParameters_MetaData[] = {
		{ "Comment", "/** Variables exposed to the outside work for tweaking*/" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Variables exposed to the outside work for tweaking" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorData_MetaData[] = {
		{ "Comment", "/** Data used by the editor to maintain UI state etc.. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Data used by the editor to maintain UI state etc.." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorParameters_MetaData[] = {
		{ "Comment", "/** Wrapper for editor only parameters. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Wrapper for editor only parameters." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixedBounds_MetaData[] = {
		{ "Category", "System" },
		{ "Comment", "/** The fixed bounding box value for the whole system. When placed in the level and the bounding box is not visible to the camera, the effect is culled from rendering. */" },
		{ "EditCondition", "bFixedBounds" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "SkipSystemResetOnChange", "true" },
		{ "ToolTip", "The fixed bounding box value for the whole system. When placed in the level and the bounding box is not visible to the camera, the effect is culled from rendering." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDeterminism_MetaData[] = {
		{ "Category", "System" },
		{ "Comment", "/**\n\x09When disabled we will generate a RandomSeed per instance on reset which is not deterministic.\n\x09When enabled we will always use the RandomSeed from the system plus the components RandomSeedOffset, this allows for determinism but variance between components.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "When disabled we will generate a RandomSeed per instance on reset which is not deterministic.\nWhen enabled we will always use the RandomSeed from the system plus the components RandomSeedOffset, this allows for determinism but variance between components." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[] = {
		{ "Category", "System" },
		{ "Comment", "/** Seed used for system script random number generator. */" },
		{ "EditCondition", "bDeterminism" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Seed used for system script random number generator." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarmupTime_MetaData[] = {
		{ "Category", "System" },
		{ "Comment", "/** Warm up time in seconds. Used to calculate WarmupTickCount. Rounds down to the nearest multiple of WarmupTickDelta. */" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Warm up time in seconds. Used to calculate WarmupTickCount. Rounds down to the nearest multiple of WarmupTickDelta." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarmupTickCount_MetaData[] = {
		{ "Category", "System" },
		{ "Comment", "/** Number of ticks to process for warmup. You can set by this or by time via WarmupTime. */" },
		{ "EditCondition", "WarmupTime > 0.0" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Number of ticks to process for warmup. You can set by this or by time via WarmupTime." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarmupTickDelta_MetaData[] = {
		{ "Category", "System" },
		{ "Comment", "/** Delta time to use for warmup ticks. */" },
		{ "EditCondition", "WarmupTime > 0.0" },
		{ "EditConditionHides", "" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Delta time to use for warmup ticks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFixedTickDelta_MetaData[] = {
		{ "Category", "System" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixedTickDeltaTime_MetaData[] = {
		{ "Category", "System" },
		{ "Comment", "/**\n\x09If activated, the system ticks with a fixed delta time instead of the varying game thread delta time. This leads to much more stable simulations.\n\x09When the fixed tick delta is smaller than the game thread tick time the simulation is substepping by executing multiple ticks per frame.\n\x09Note that activating this feature forces the system to tick on the game thread instead of an async task in parallel.\n\n\x09The max number of substeps per frame can be set via fx.Niagara.SystemSimulation.MaxTickSubsteps\n\x09*/" },
		{ "EditCondition", "bFixedTickDelta" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "If activated, the system ticks with a fixed delta time instead of the varying game thread delta time. This leads to much more stable simulations.\nWhen the fixed tick delta is smaller than the game thread tick time the simulation is substepping by executing multiple ticks per frame.\nNote that activating this feature forces the system to tick on the game thread instead of an async task in parallel.\n\nThe max number of substeps per frame can be set via fx.Niagara.SystemSimulation.MaxTickSubsteps" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakerSettings_MetaData[] = {
		{ "Comment", "/** Settings used inside the baker */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Settings used inside the baker" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakerGeneratedSettings_MetaData[] = {
		{ "Comment", "/** Generated data baker settings, will be null until we have generated at least once. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Generated data baker settings, will be null until we have generated at least once." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNeedsGPUContextInitForDataInterfaces_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowSystemStateFastPath_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** When enabled if all emitters don't require script execution and the system script is empty / constant we can invoke a faster CPU path. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "When enabled if all emitters don't require script execution and the system script is empty / constant we can invoke a faster CPU path." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSystemStateFastPathEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessageKeyToMessageMap_MetaData[] = {
		{ "Comment", "/** Messages associated with the System asset. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Messages associated with the System asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessageStore_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SystemStateData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThumbnailImage;
	static void NewProp_bExposeToLibrary_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExposeToLibrary;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LibraryVisibility_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LibraryVisibility;
	static void NewProp_bIsTemplateAsset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTemplateAsset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TemplateSpecification_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TemplateSpecification;
	static const UECodeGen_Private::FTextPropertyParams NewProp_TemplateAssetDescription;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Category;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScratchPadScripts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ScratchPadScripts;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditorOnlyAddedParameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateContext;
	static void NewProp_bBakeOutRapidIteration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakeOutRapidIteration;
	static void NewProp_bBakeOutRapidIterationOnCook_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakeOutRapidIterationOnCook;
	static void NewProp_bCompressAttributes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompressAttributes;
	static void NewProp_bTrimAttributes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTrimAttributes;
	static void NewProp_bTrimAttributesOnCook_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTrimAttributesOnCook;
	static void NewProp_bIgnoreParticleReadsForAttributeTrim_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreParticleReadsForAttributeTrim;
	static void NewProp_bDisableDebugSwitches_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableDebugSwitches;
	static void NewProp_bDisableDebugSwitchesOnCook_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableDebugSwitchesOnCook;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterDefinitionsSubscriptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterDefinitionsSubscriptions;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bSupportLargeWorldCoordinates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportLargeWorldCoordinates;
	static void NewProp_bOverrideCastShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCastShadow;
	static void NewProp_bOverrideReceivesDecals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideReceivesDecals;
	static void NewProp_bOverrideRenderCustomDepth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideRenderCustomDepth;
	static void NewProp_bOverrideCustomDepthStencilValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCustomDepthStencilValue;
	static void NewProp_bOverrideCustomDepthStencilWriteMask_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCustomDepthStencilWriteMask;
	static void NewProp_bOverrideTranslucencySortPriority_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideTranslucencySortPriority;
	static void NewProp_bOverrideTranslucencySortDistanceOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideTranslucencySortDistanceOffset;
	static void NewProp_bCastShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadow;
	static void NewProp_bReceivesDecals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceivesDecals;
	static void NewProp_bRenderCustomDepth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderCustomDepth;
	static void NewProp_bDisableExperimentalVM_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableExperimentalVM;
	static void NewProp_bInitialOwnerVelocityFromActor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitialOwnerVelocityFromActor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CustomDepthStencilWriteMask_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CustomDepthStencilWriteMask;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CustomDepthStencilValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TranslucencySortPriority;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TranslucencySortDistanceOffset;
	static void NewProp_bDumpDebugSystemInfo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDumpDebugSystemInfo;
	static void NewProp_bDumpDebugEmitterInfo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDumpDebugEmitterInfo;
	static void NewProp_bRequireCurrentFrameData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireCurrentFrameData;
	static void NewProp_bFixedBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFixedBounds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EffectType;
	static void NewProp_bOverrideScalabilitySettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideScalabilitySettings;
	static void NewProp_bOverrideAllowCullingForLocalPlayers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAllowCullingForLocalPlayers;
	static void NewProp_bAllowCullingForLocalPlayersOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCullingForLocalPlayersOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SystemScalabilityOverrides;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Platforms;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterHandles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EmitterHandles;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParameterCollectionOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterCollectionOverrides;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScalabilityOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ScalabilityOverrides;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SystemSpawnScript;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SystemUpdateScript;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SystemCompiledData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExposedParameters;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditorData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditorParameters;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FixedBounds;
	static void NewProp_bDeterminism_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeterminism;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WarmupTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WarmupTickCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WarmupTickDelta;
	static void NewProp_bFixedTickDelta_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFixedTickDelta;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FixedTickDeltaTime;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BakerSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BakerGeneratedSettings;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bNeedsGPUContextInitForDataInterfaces_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedsGPUContextInitForDataInterfaces;
	static void NewProp_bAllowSystemStateFastPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSystemStateFastPath;
	static void NewProp_bSystemStateFastPathEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSystemStateFastPathEnabled;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MessageKeyToMessageMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MessageKeyToMessageMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MessageKeyToMessageMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MessageStore;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SystemStateData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ThumbnailImage = { "ThumbnailImage", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSystem, ThumbnailImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbnailImage_MetaData), NewProp_ThumbnailImage_MetaData) };
void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bExposeToLibrary_SetBit(void* Obj)
{
	((UNiagaraSystem*)Obj)->bExposeToLibrary_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bExposeToLibrary = { "bExposeToLibrary", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bExposeToLibrary_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExposeToLibrary_MetaData), NewProp_bExposeToLibrary_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_LibraryVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_LibraryVisibility = { "LibraryVisibility", nullptr, (EPropertyFlags)0x0010010800000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSystem, LibraryVisibility), Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LibraryVisibility_MetaData), NewProp_LibraryVisibility_MetaData) }; // 4158869167
void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bIsTemplateAsset_SetBit(void* Obj)
{
	((UNiagaraSystem*)Obj)->bIsTemplateAsset_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bIsTemplateAsset = { "bIsTemplateAsset", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bIsTemplateAsset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTemplateAsset_MetaData), NewProp_bIsTemplateAsset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_TemplateSpecification_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_TemplateSpecification = { "TemplateSpecification", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSystem, TemplateSpecification_DEPRECATED), Z_Construct_UEnum_Niagara_ENiagaraScriptTemplateSpecification, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemplateSpecification_MetaData), NewProp_TemplateSpecification_MetaData) }; // 143822808
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_TemplateAssetDescription = { "TemplateAssetDescription", nullptr, (EPropertyFlags)0x0010050800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSystem, TemplateAssetDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemplateAssetDescription_MetaData), NewProp_TemplateAssetDescription_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010010800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSystem, Category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_AssetTags_Inner = { "AssetTags", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraAssetTagDefinitionReference, METADATA_PARAMS(0, nullptr) }; // 304733456
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_AssetTags = { "AssetTags", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSystem, AssetTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetTags_MetaData), NewProp_AssetTags_MetaData) }; // 304733456
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ScratchPadScripts_Inner = { "ScratchPadScripts", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ScratchPadScripts = { "ScratchPadScripts", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSystem, ScratchPadScripts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScratchPadScripts_MetaData), NewProp_ScratchPadScripts_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EditorOnlyAddedParameters = { "EditorOnlyAddedParameters", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSystem, EditorOnlyAddedParameters), Z_Construct_UScriptStruct_FNiagaraParameterStore, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorOnlyAddedParameters_MetaData), NewProp_EditorOnlyAddedParameters_MetaData) }; // 3025266078
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_UpdateContext = { "UpdateContext", nullptr, (EPropertyFlags)0x0010008800002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSystem, UpdateContext), Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateContext_MetaData), NewProp_UpdateContext_MetaData) }; // 3298000767
void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bBakeOutRapidIteration_SetBit(void* Obj)
{
	((UNiagaraSystem*)Obj)->bBakeOutRapidIteration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bBakeOutRapidIteration = { "bBakeOutRapidIteration", nullptr, (EPropertyFlags)0x00200c0800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bBakeOutRapidIteration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBakeOutRapidIteration_MetaData), NewProp_bBakeOutRapidIteration_MetaData) };
void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bBakeOutRapidIterationOnCook_SetBit(void* Obj)
{
	((UNiagaraSystem*)Obj)->bBakeOutRapidIterationOnCook = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bBakeOutRapidIterationOnCook = { "bBakeOutRapidIterationOnCook", nullptr, (EPropertyFlags)0x00200c0800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bBakeOutRapidIterationOnCook_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBakeOutRapidIterationOnCook_MetaData), NewProp_bBakeOutRapidIterationOnCook_MetaData) };
void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bCompressAttributes_SetBit(void* Obj)
{
	((UNiagaraSystem*)Obj)->bCompressAttributes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bCompressAttributes = { "bCompressAttributes", nullptr, (EPropertyFlags)0x00200c0800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bCompressAttributes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCompressAttributes_MetaData), NewProp_bCompressAttributes_MetaData) };
void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bTrimAttributes_SetBit(void* Obj)
{
	((UNiagaraSystem*)Obj)->bTrimAttributes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bTrimAttributes = { "bTrimAttributes", nullptr, (EPropertyFlags)0x00200c0800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bTrimAttributes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTrimAttributes_MetaData), NewProp_bTrimAttributes_MetaData) };
void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bTrimAttributesOnCook_SetBit(void* Obj)
{
	((UNiagaraSystem*)Obj)->bTrimAttributesOnCook = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bTrimAttributesOnCook = { "bTrimAttributesOnCook", nullptr, (EPropertyFlags)0x00200c0800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bTrimAttributesOnCook_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTrimAttributesOnCook_MetaData), NewProp_bTrimAttributesOnCook_MetaData) };
void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bIgnoreParticleReadsForAttributeTrim_SetBit(void* Obj)
{
	((UNiagaraSystem*)Obj)->bIgnoreParticleReadsForAttributeTrim = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bIgnoreParticleReadsForAttributeTrim = { "bIgnoreParticleReadsForAttributeTrim", nullptr, (EPropertyFlags)0x00200c0800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bIgnoreParticleReadsForAttributeTrim_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreParticleReadsForAttributeTrim_MetaData), NewProp_bIgnoreParticleReadsForAttributeTrim_MetaData) };
void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDisableDebugSwitches_SetBit(void* Obj)
{
	((UNiagaraSystem*)Obj)->bDisableDebugSwitches = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDisableDebugSwitches = { "bDisableDebugSwitches", nullptr, (EPropertyFlags)0x00200c0800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDisableDebugSwitches_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableDebugSwitches_MetaData), NewProp_bDisableDebugSwitches_MetaData) };
void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDisableDebugSwitchesOnCook_SetBit(void* Obj)
{
	((UNiagaraSystem*)Obj)->bDisableDebugSwitchesOnCook = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDisableDebugSwitchesOnCook = { "bDisableDebugSwitchesOnCook", nullptr, (EPropertyFlags)0x00200c0800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDisableDebugSwitchesOnCook_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableDebugSwitchesOnCook_MetaData), NewProp_bDisableDebugSwitchesOnCook_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ParameterDefinitionsSubscriptions_Inner = { "ParameterDefinitionsSubscriptions", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FParameterDefinitionsSubscription, METADATA_PARAMS(0, nullptr) }; // 2160028313
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ParameterDefinitionsSubscriptions = { "ParameterDefinitionsSubscriptions", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSystem, ParameterDefinitionsSubscriptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterDefinitionsSubscriptions_MetaData), NewProp_ParameterDefinitionsSubscriptions_MetaData) }; // 2160028313
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bSupportLargeWorldCoordinates_SetBit(void* Obj)
{
	((UNiagaraSystem*)Obj)->bSupportLargeWorldCoordinates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bSupportLargeWorldCoordinates = { "bSupportLargeWorldCoordinates", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bSupportLargeWorldCoordinates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportLargeWorldCoordinates_MetaData), NewProp_bSupportLargeWorldCoordinates_MetaData) };
void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideCastShadow_SetBit(void* Obj)
{
	((UNiagaraSystem*)Obj)->bOverrideCastShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideCastShadow = { "bOverrideCastShadow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideCastShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideCastShadow_MetaData), NewProp_bOverrideCastShadow_MetaData) };
void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideReceivesDecals_SetBit(void* Obj)
{
	((UNiagaraSystem*)Obj)->bOverrideReceivesDecals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideReceivesDecals = { "bOverrideReceivesDecals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideReceivesDecals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideReceivesDecals_MetaData), NewProp_bOverrideReceivesDecals_MetaData) };
void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideRenderCustomDepth_SetBit(void* Obj)
{
	((UNiagaraSystem*)Obj)->bOverrideRenderCustomDepth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideRenderCustomDepth = { "bOverrideRenderCustomDepth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideRenderCustomDepth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideRenderCustomDepth_MetaData), NewProp_bOverrideRenderCustomDepth_MetaData) };
void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideCustomDepthStencilValue_SetBit(void* Obj)
{
	((UNiagaraSystem*)Obj)->bOverrideCustomDepthStencilValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideCustomDepthStencilValue = { "bOverrideCustomDepthStencilValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideCustomDepthStencilValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideCustomDepthStencilValue_MetaData), NewProp_bOverrideCustomDepthStencilValue_MetaData) };
void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideCustomDepthStencilWriteMask_SetBit(void* Obj)
{
	((UNiagaraSystem*)Obj)->bOverrideCustomDepthStencilWriteMask = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideCustomDepthStencilWriteMask = { "bOverrideCustomDepthStencilWriteMask", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideCustomDepthStencilWriteMask_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideCustomDepthStencilWriteMask_MetaData), NewProp_bOverrideCustomDepthStencilWriteMask_MetaData) };
void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideTranslucencySortPriority_SetBit(void* Obj)
{
	((UNiagaraSystem*)Obj)->bOverrideTranslucencySortPriority = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideTranslucencySortPriority = { "bOverrideTranslucencySortPriority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideTranslucencySortPriority_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideTranslucencySortPriority_MetaData), NewProp_bOverrideTranslucencySortPriority_MetaData) };
void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideTranslucencySortDistanceOffset_SetBit(void* Obj)
{
	((UNiagaraSystem*)Obj)->bOverrideTranslucencySortDistanceOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideTranslucencySortDistanceOffset = { "bOverrideTranslucencySortDistanceOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideTranslucencySortDistanceOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideTranslucencySortDistanceOffset_MetaData), NewProp_bOverrideTranslucencySortDistanceOffset_MetaData) };
void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bCastShadow_SetBit(void* Obj)
{
	((UNiagaraSystem*)Obj)->bCastShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bCastShadow = { "bCastShadow", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bCastShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastShadow_MetaData), NewProp_bCastShadow_MetaData) };
void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bReceivesDecals_SetBit(void* Obj)
{
	((UNiagaraSystem*)Obj)->bReceivesDecals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bReceivesDecals = { "bReceivesDecals", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bReceivesDecals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReceivesDecals_MetaData), NewProp_bReceivesDecals_MetaData) };
void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bRenderCustomDepth_SetBit(void* Obj)
{
	((UNiagaraSystem*)Obj)->bRenderCustomDepth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bRenderCustomDepth = { "bRenderCustomDepth", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bRenderCustomDepth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRenderCustomDepth_MetaData), NewProp_bRenderCustomDepth_MetaData) };
void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDisableExperimentalVM_SetBit(void* Obj)
{
	((UNiagaraSystem*)Obj)->bDisableExperimentalVM = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDisableExperimentalVM = { "bDisableExperimentalVM", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDisableExperimentalVM_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableExperimentalVM_MetaData), NewProp_bDisableExperimentalVM_MetaData) };
void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bInitialOwnerVelocityFromActor_SetBit(void* Obj)
{
	((UNiagaraSystem*)Obj)->bInitialOwnerVelocityFromActor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bInitialOwnerVelocityFromActor = { "bInitialOwnerVelocityFromActor", nullptr, (EPropertyFlags)0x0040040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bInitialOwnerVelocityFromActor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInitialOwnerVelocityFromActor_MetaData), NewProp_bInitialOwnerVelocityFromActor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_CustomDepthStencilWriteMask_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_CustomDepthStencilWriteMask = { "CustomDepthStencilWriteMask", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSystem, CustomDepthStencilWriteMask), Z_Construct_UEnum_Engine_ERendererStencilMask, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomDepthStencilWriteMask_MetaData), NewProp_CustomDepthStencilWriteMask_MetaData) }; // 2385485039
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_CustomDepthStencilValue = { "CustomDepthStencilValue", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSystem, CustomDepthStencilValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomDepthStencilValue_MetaData), NewProp_CustomDepthStencilValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_TranslucencySortPriority = { "TranslucencySortPriority", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSystem, TranslucencySortPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslucencySortPriority_MetaData), NewProp_TranslucencySortPriority_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_TranslucencySortDistanceOffset = { "TranslucencySortDistanceOffset", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSystem, TranslucencySortDistanceOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslucencySortDistanceOffset_MetaData), NewProp_TranslucencySortDistanceOffset_MetaData) };
void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDumpDebugSystemInfo_SetBit(void* Obj)
{
	((UNiagaraSystem*)Obj)->bDumpDebugSystemInfo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDumpDebugSystemInfo = { "bDumpDebugSystemInfo", nullptr, (EPropertyFlags)0x0010040000002001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDumpDebugSystemInfo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDumpDebugSystemInfo_MetaData), NewProp_bDumpDebugSystemInfo_MetaData) };
void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDumpDebugEmitterInfo_SetBit(void* Obj)
{
	((UNiagaraSystem*)Obj)->bDumpDebugEmitterInfo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDumpDebugEmitterInfo = { "bDumpDebugEmitterInfo", nullptr, (EPropertyFlags)0x0010040000002001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDumpDebugEmitterInfo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDumpDebugEmitterInfo_MetaData), NewProp_bDumpDebugEmitterInfo_MetaData) };
void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bRequireCurrentFrameData_SetBit(void* Obj)
{
	((UNiagaraSystem*)Obj)->bRequireCurrentFrameData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bRequireCurrentFrameData = { "bRequireCurrentFrameData", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bRequireCurrentFrameData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequireCurrentFrameData_MetaData), NewProp_bRequireCurrentFrameData_MetaData) };
void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bFixedBounds_SetBit(void* Obj)
{
	((UNiagaraSystem*)Obj)->bFixedBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bFixedBounds = { "bFixedBounds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bFixedBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFixedBounds_MetaData), NewProp_bFixedBounds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EffectType = { "EffectType", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSystem, EffectType), Z_Construct_UClass_UNiagaraEffectType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectType_MetaData), NewProp_EffectType_MetaData) };
void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideScalabilitySettings_SetBit(void* Obj)
{
	((UNiagaraSystem*)Obj)->bOverrideScalabilitySettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideScalabilitySettings = { "bOverrideScalabilitySettings", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideScalabilitySettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideScalabilitySettings_MetaData), NewProp_bOverrideScalabilitySettings_MetaData) };
void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideAllowCullingForLocalPlayers_SetBit(void* Obj)
{
	((UNiagaraSystem*)Obj)->bOverrideAllowCullingForLocalPlayers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideAllowCullingForLocalPlayers = { "bOverrideAllowCullingForLocalPlayers", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideAllowCullingForLocalPlayers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideAllowCullingForLocalPlayers_MetaData), NewProp_bOverrideAllowCullingForLocalPlayers_MetaData) };
void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bAllowCullingForLocalPlayersOverride_SetBit(void* Obj)
{
	((UNiagaraSystem*)Obj)->bAllowCullingForLocalPlayersOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bAllowCullingForLocalPlayersOverride = { "bAllowCullingForLocalPlayersOverride", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bAllowCullingForLocalPlayersOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowCullingForLocalPlayersOverride_MetaData), NewProp_bAllowCullingForLocalPlayersOverride_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemScalabilityOverrides = { "SystemScalabilityOverrides", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSystem, SystemScalabilityOverrides), Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SystemScalabilityOverrides_MetaData), NewProp_SystemScalabilityOverrides_MetaData) }; // 2652036440
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_Platforms = { "Platforms", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSystem, Platforms), Z_Construct_UScriptStruct_FNiagaraPlatformSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Platforms_MetaData), NewProp_Platforms_MetaData) }; // 1338504544
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EmitterHandles_Inner = { "EmitterHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraEmitterHandle, METADATA_PARAMS(0, nullptr) }; // 2060940165
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EmitterHandles = { "EmitterHandles", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSystem, EmitterHandles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmitterHandles_MetaData), NewProp_EmitterHandles_MetaData) }; // 2060940165
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ParameterCollectionOverrides_Inner = { "ParameterCollectionOverrides", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraParameterCollectionInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ParameterCollectionOverrides = { "ParameterCollectionOverrides", nullptr, (EPropertyFlags)0x01240c0000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSystem, ParameterCollectionOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterCollectionOverrides_MetaData), NewProp_ParameterCollectionOverrides_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ScalabilityOverrides_Inner = { "ScalabilityOverrides", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride, METADATA_PARAMS(0, nullptr) }; // 339833541
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ScalabilityOverrides = { "ScalabilityOverrides", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSystem, ScalabilityOverrides_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalabilityOverrides_MetaData), NewProp_ScalabilityOverrides_MetaData) }; // 339833541
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemSpawnScript = { "SystemSpawnScript", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSystem, SystemSpawnScript), Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SystemSpawnScript_MetaData), NewProp_SystemSpawnScript_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemUpdateScript = { "SystemUpdateScript", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSystem, SystemUpdateScript), Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SystemUpdateScript_MetaData), NewProp_SystemUpdateScript_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemCompiledData = { "SystemCompiledData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSystem, SystemCompiledData), Z_Construct_UScriptStruct_FNiagaraSystemCompiledData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SystemCompiledData_MetaData), NewProp_SystemCompiledData_MetaData) }; // 3817398627
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ExposedParameters = { "ExposedParameters", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSystem, ExposedParameters), Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExposedParameters_MetaData), NewProp_ExposedParameters_MetaData) }; // 366734223
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EditorData = { "EditorData", nullptr, (EPropertyFlags)0x0124080800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSystem, EditorData), Z_Construct_UClass_UNiagaraEditorDataBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorData_MetaData), NewProp_EditorData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EditorParameters = { "EditorParameters", nullptr, (EPropertyFlags)0x0124080800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSystem, EditorParameters), Z_Construct_UClass_UNiagaraEditorParametersAdapterBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorParameters_MetaData), NewProp_EditorParameters_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_FixedBounds = { "FixedBounds", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSystem, FixedBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixedBounds_MetaData), NewProp_FixedBounds_MetaData) };
void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDeterminism_SetBit(void* Obj)
{
	((UNiagaraSystem*)Obj)->bDeterminism = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDeterminism = { "bDeterminism", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDeterminism_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDeterminism_MetaData), NewProp_bDeterminism_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSystem, RandomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSeed_MetaData), NewProp_RandomSeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_WarmupTime = { "WarmupTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSystem, WarmupTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarmupTime_MetaData), NewProp_WarmupTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_WarmupTickCount = { "WarmupTickCount", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSystem, WarmupTickCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarmupTickCount_MetaData), NewProp_WarmupTickCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_WarmupTickDelta = { "WarmupTickDelta", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSystem, WarmupTickDelta), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarmupTickDelta_MetaData), NewProp_WarmupTickDelta_MetaData) };
void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bFixedTickDelta_SetBit(void* Obj)
{
	((UNiagaraSystem*)Obj)->bFixedTickDelta = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bFixedTickDelta = { "bFixedTickDelta", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bFixedTickDelta_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFixedTickDelta_MetaData), NewProp_bFixedTickDelta_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_FixedTickDeltaTime = { "FixedTickDeltaTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSystem, FixedTickDeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixedTickDeltaTime_MetaData), NewProp_FixedTickDeltaTime_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_BakerSettings = { "BakerSettings", nullptr, (EPropertyFlags)0x0124080800000008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSystem, BakerSettings), Z_Construct_UClass_UNiagaraBakerSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakerSettings_MetaData), NewProp_BakerSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_BakerGeneratedSettings = { "BakerGeneratedSettings", nullptr, (EPropertyFlags)0x0124080800000008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSystem, BakerGeneratedSettings), Z_Construct_UClass_UNiagaraBakerSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakerGeneratedSettings_MetaData), NewProp_BakerGeneratedSettings_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bNeedsGPUContextInitForDataInterfaces_SetBit(void* Obj)
{
	((UNiagaraSystem*)Obj)->bNeedsGPUContextInitForDataInterfaces = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bNeedsGPUContextInitForDataInterfaces = { "bNeedsGPUContextInitForDataInterfaces", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bNeedsGPUContextInitForDataInterfaces_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNeedsGPUContextInitForDataInterfaces_MetaData), NewProp_bNeedsGPUContextInitForDataInterfaces_MetaData) };
void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bAllowSystemStateFastPath_SetBit(void* Obj)
{
	((UNiagaraSystem*)Obj)->bAllowSystemStateFastPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bAllowSystemStateFastPath = { "bAllowSystemStateFastPath", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bAllowSystemStateFastPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowSystemStateFastPath_MetaData), NewProp_bAllowSystemStateFastPath_MetaData) };
void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bSystemStateFastPathEnabled_SetBit(void* Obj)
{
	((UNiagaraSystem*)Obj)->bSystemStateFastPathEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bSystemStateFastPathEnabled = { "bSystemStateFastPathEnabled", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bSystemStateFastPathEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSystemStateFastPathEnabled_MetaData), NewProp_bSystemStateFastPathEnabled_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_MessageKeyToMessageMap_ValueProp = { "MessageKeyToMessageMap", nullptr, (EPropertyFlags)0x0104000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UNiagaraMessageDataBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_MessageKeyToMessageMap_Key_KeyProp = { "MessageKeyToMessageMap_Key", nullptr, (EPropertyFlags)0x0100000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_MessageKeyToMessageMap = { "MessageKeyToMessageMap", nullptr, (EPropertyFlags)0x0124080820000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSystem, MessageKeyToMessageMap_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessageKeyToMessageMap_MetaData), NewProp_MessageKeyToMessageMap_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_MessageStore = { "MessageStore", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSystem, MessageStore), Z_Construct_UScriptStruct_FNiagaraMessageStore, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessageStore_MetaData), NewProp_MessageStore_MetaData) }; // 30379371
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemStateData = { "SystemStateData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSystem, SystemStateData), Z_Construct_UScriptStruct_FNiagaraSystemStateData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SystemStateData_MetaData), NewProp_SystemStateData_MetaData) }; // 3744481345
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraSystem_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ThumbnailImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bExposeToLibrary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_LibraryVisibility_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_LibraryVisibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bIsTemplateAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_TemplateSpecification_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_TemplateSpecification,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_TemplateAssetDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_AssetTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_AssetTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ScratchPadScripts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ScratchPadScripts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EditorOnlyAddedParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_UpdateContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bBakeOutRapidIteration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bBakeOutRapidIterationOnCook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bCompressAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bTrimAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bTrimAttributesOnCook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bIgnoreParticleReadsForAttributeTrim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDisableDebugSwitches,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDisableDebugSwitchesOnCook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ParameterDefinitionsSubscriptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ParameterDefinitionsSubscriptions,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bSupportLargeWorldCoordinates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideCastShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideReceivesDecals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideRenderCustomDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideCustomDepthStencilValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideCustomDepthStencilWriteMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideTranslucencySortPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideTranslucencySortDistanceOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bCastShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bReceivesDecals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bRenderCustomDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDisableExperimentalVM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bInitialOwnerVelocityFromActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_CustomDepthStencilWriteMask_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_CustomDepthStencilWriteMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_CustomDepthStencilValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_TranslucencySortPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_TranslucencySortDistanceOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDumpDebugSystemInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDumpDebugEmitterInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bRequireCurrentFrameData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bFixedBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EffectType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideScalabilitySettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideAllowCullingForLocalPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bAllowCullingForLocalPlayersOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemScalabilityOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_Platforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EmitterHandles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EmitterHandles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ParameterCollectionOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ParameterCollectionOverrides,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ScalabilityOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ScalabilityOverrides,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemSpawnScript,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemUpdateScript,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemCompiledData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ExposedParameters,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EditorData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EditorParameters,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_FixedBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDeterminism,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_RandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_WarmupTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_WarmupTickCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_WarmupTickDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bFixedTickDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_FixedTickDeltaTime,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_BakerSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_BakerGeneratedSettings,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bNeedsGPUContextInitForDataInterfaces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bAllowSystemStateFastPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bSystemStateFastPathEnabled,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_MessageKeyToMessageMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_MessageKeyToMessageMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_MessageKeyToMessageMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_MessageStore,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemStateData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFXSystemAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraSystem_Statics::ClassParams = {
	&UNiagaraSystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraSystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraSystem()
{
	if (!Z_Registration_Info_UClass_UNiagaraSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraSystem.OuterSingleton, Z_Construct_UClass_UNiagaraSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraSystem.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraSystem>()
{
	return UNiagaraSystem::StaticClass();
}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraSystem)
// End Class UNiagaraSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraEmitterCompiledData::StaticStruct, Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewStructOps, TEXT("NiagaraEmitterCompiledData"), &Z_Registration_Info_UScriptStruct_NiagaraEmitterCompiledData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraEmitterCompiledData), 505837893U) },
		{ FNiagaraParameterDataSetBinding::StaticStruct, Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::NewStructOps, TEXT("NiagaraParameterDataSetBinding"), &Z_Registration_Info_UScriptStruct_NiagaraParameterDataSetBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraParameterDataSetBinding), 2533092139U) },
		{ FNiagaraParameterDataSetBindingCollection::StaticStruct, Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewStructOps, TEXT("NiagaraParameterDataSetBindingCollection"), &Z_Registration_Info_UScriptStruct_NiagaraParameterDataSetBindingCollection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraParameterDataSetBindingCollection), 3743659228U) },
		{ FNiagaraSystemCompiledData::StaticStruct, Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewStructOps, TEXT("NiagaraSystemCompiledData"), &Z_Registration_Info_UScriptStruct_NiagaraSystemCompiledData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraSystemCompiledData), 3817398627U) },
		{ FNiagaraSystemScalabilityOverrides::StaticStruct, Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::NewStructOps, TEXT("NiagaraSystemScalabilityOverrides"), &Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilityOverrides, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraSystemScalabilityOverrides), 2652036440U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraSystem, UNiagaraSystem::StaticClass, TEXT("UNiagaraSystem"), &Z_Registration_Info_UClass_UNiagaraSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraSystem), 3808037567U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_1955954277(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
