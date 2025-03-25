// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/Stateless/NiagaraStatelessEmitter.h"
#include "Niagara/Classes/NiagaraDataSetCompiledData.h"
#include "Niagara/Classes/NiagaraPlatformSet.h"
#include "Niagara/Internal/NiagaraSystemEmitterState.h"
#include "Niagara/Internal/Stateless/NiagaraStatelessSpawnInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStatelessEmitter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRendererProperties_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessEmitter();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessEmitter_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterStateData();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPlatformSet();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraStatelessEmitter
void UNiagaraStatelessEmitter::StaticRegisterNativesUNiagaraStatelessEmitter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStatelessEmitter);
UClass* Z_Construct_UClass_UNiagaraStatelessEmitter_NoRegister()
{
	return UNiagaraStatelessEmitter::StaticClass();
}
struct Z_Construct_UClass_UNiagaraStatelessEmitter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Editor data for stateless emitters\n* Generates runtime data to be consumed by the game\n*/" },
		{ "IncludePath", "Stateless/NiagaraStatelessEmitter.h" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessEmitter.h" },
		{ "ToolTip", "Editor data for stateless emitters\nGenerates runtime data to be consumed by the game" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueEmitterName_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmitterTemplateClass_MetaData[] = {
		{ "AllowedClasses", "/Script/Niagara.NiagaraStatelessEmitterTemplate" },
		{ "Category", "General" },
		{ "HideInStack", "" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDeterministic_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixedBounds_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmitterState_MetaData[] = {
		{ "Category", "Emitter State" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnInfos_MetaData[] = {
		{ "Category", "Spawn Info" },
		{ "HideInStack", "" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modules_Inner_MetaData[] = {
		{ "Category", "Modules" },
		{ "EditInline", "true" },
		{ "HideInStack", "" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modules_MetaData[] = {
		{ "Category", "Modules" },
		{ "EditInline", "true" },
		{ "HideInStack", "" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RendererProperties_Inner_MetaData[] = {
		{ "Category", "Renderer" },
		{ "EditInline", "true" },
		{ "HideInStack", "" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RendererProperties_MetaData[] = {
		{ "Category", "Renderer" },
		{ "EditInline", "true" },
		{ "HideInStack", "" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Platforms_MetaData[] = {
		{ "Category", "Scalability" },
		{ "DisplayInScalabilityContext", "" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleDataSetCompiledData_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentOffsets_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessEmitter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueEmitterName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EmitterTemplateClass;
	static void NewProp_bDeterministic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeterministic;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FixedBounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnInfos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnInfos;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Modules;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RendererProperties_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RendererProperties;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Platforms;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleDataSetCompiledData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ComponentOffsets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentOffsets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStatelessEmitter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::NewProp_UniqueEmitterName = { "UniqueEmitterName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessEmitter, UniqueEmitterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueEmitterName_MetaData), NewProp_UniqueEmitterName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::NewProp_EmitterTemplateClass = { "EmitterTemplateClass", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessEmitter, EmitterTemplateClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmitterTemplateClass_MetaData), NewProp_EmitterTemplateClass_MetaData) };
void Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::NewProp_bDeterministic_SetBit(void* Obj)
{
	((UNiagaraStatelessEmitter*)Obj)->bDeterministic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::NewProp_bDeterministic = { "bDeterministic", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraStatelessEmitter), &Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::NewProp_bDeterministic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDeterministic_MetaData), NewProp_bDeterministic_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessEmitter, RandomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSeed_MetaData), NewProp_RandomSeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::NewProp_FixedBounds = { "FixedBounds", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessEmitter, FixedBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixedBounds_MetaData), NewProp_FixedBounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::NewProp_EmitterState = { "EmitterState", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessEmitter, EmitterState), Z_Construct_UScriptStruct_FNiagaraEmitterStateData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmitterState_MetaData), NewProp_EmitterState_MetaData) }; // 2942417068
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::NewProp_SpawnInfos_Inner = { "SpawnInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo, METADATA_PARAMS(0, nullptr) }; // 95420259
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::NewProp_SpawnInfos = { "SpawnInfos", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessEmitter, SpawnInfos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnInfos_MetaData), NewProp_SpawnInfos_MetaData) }; // 95420259
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::NewProp_Modules_Inner = { "Modules", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraStatelessModule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modules_Inner_MetaData), NewProp_Modules_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::NewProp_Modules = { "Modules", nullptr, (EPropertyFlags)0x0124088000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessEmitter, Modules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modules_MetaData), NewProp_Modules_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::NewProp_RendererProperties_Inner = { "RendererProperties", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraRendererProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RendererProperties_Inner_MetaData), NewProp_RendererProperties_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::NewProp_RendererProperties = { "RendererProperties", nullptr, (EPropertyFlags)0x0124088000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessEmitter, RendererProperties), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RendererProperties_MetaData), NewProp_RendererProperties_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::NewProp_Platforms = { "Platforms", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessEmitter, Platforms), Z_Construct_UScriptStruct_FNiagaraPlatformSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Platforms_MetaData), NewProp_Platforms_MetaData) }; // 1338504544
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::NewProp_ParticleDataSetCompiledData = { "ParticleDataSetCompiledData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessEmitter, ParticleDataSetCompiledData), Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleDataSetCompiledData_MetaData), NewProp_ParticleDataSetCompiledData_MetaData) }; // 3790253218
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::NewProp_ComponentOffsets_Inner = { "ComponentOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::NewProp_ComponentOffsets = { "ComponentOffsets", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessEmitter, ComponentOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentOffsets_MetaData), NewProp_ComponentOffsets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::NewProp_UniqueEmitterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::NewProp_EmitterTemplateClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::NewProp_bDeterministic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::NewProp_RandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::NewProp_FixedBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::NewProp_EmitterState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::NewProp_SpawnInfos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::NewProp_SpawnInfos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::NewProp_Modules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::NewProp_Modules,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::NewProp_RendererProperties_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::NewProp_RendererProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::NewProp_Platforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::NewProp_ParticleDataSetCompiledData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::NewProp_ComponentOffsets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::NewProp_ComponentOffsets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::ClassParams = {
	&UNiagaraStatelessEmitter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraStatelessEmitter()
{
	if (!Z_Registration_Info_UClass_UNiagaraStatelessEmitter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStatelessEmitter.OuterSingleton, Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraStatelessEmitter.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraStatelessEmitter>()
{
	return UNiagaraStatelessEmitter::StaticClass();
}
UNiagaraStatelessEmitter::UNiagaraStatelessEmitter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStatelessEmitter);
UNiagaraStatelessEmitter::~UNiagaraStatelessEmitter() {}
// End Class UNiagaraStatelessEmitter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessEmitter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStatelessEmitter, UNiagaraStatelessEmitter::StaticClass, TEXT("UNiagaraStatelessEmitter"), &Z_Registration_Info_UClass_UNiagaraStatelessEmitter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStatelessEmitter), 2138386132U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessEmitter_h_832705588(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessEmitter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessEmitter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
