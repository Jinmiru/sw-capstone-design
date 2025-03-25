// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraComponentPool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraComponentPool() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponentPool();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponentPool_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNCPool();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNCPoolElement();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin ScriptStruct FNCPoolElement
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NCPoolElement;
class UScriptStruct* FNCPoolElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NCPoolElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NCPoolElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNCPoolElement, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NCPoolElement"));
	}
	return Z_Registration_Info_UScriptStruct_NCPoolElement.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNCPoolElement>()
{
	return FNCPoolElement::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNCPoolElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraComponentPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraComponentPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNCPoolElement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNCPoolElement_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0114000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNCPoolElement, Component), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNCPoolElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNCPoolElement_Statics::NewProp_Component,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNCPoolElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNCPoolElement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NCPoolElement",
	Z_Construct_UScriptStruct_FNCPoolElement_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNCPoolElement_Statics::PropPointers),
	sizeof(FNCPoolElement),
	alignof(FNCPoolElement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNCPoolElement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNCPoolElement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNCPoolElement()
{
	if (!Z_Registration_Info_UScriptStruct_NCPoolElement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NCPoolElement.InnerSingleton, Z_Construct_UScriptStruct_FNCPoolElement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NCPoolElement.InnerSingleton;
}
// End ScriptStruct FNCPoolElement

// Begin ScriptStruct FNCPool
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NCPool;
class UScriptStruct* FNCPool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NCPool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NCPool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNCPool, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NCPool"));
	}
	return Z_Registration_Info_UScriptStruct_NCPool.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNCPool>()
{
	return FNCPool::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNCPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraComponentPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FreeElements_MetaData[] = {
		{ "Comment", "//Collection of all currently allocated, free items ready to be grabbed for use.\n//TODO: Change this to a FIFO queue to get better usage. May need to make this whole class behave similar to TCircularQueue.\n" },
		{ "ModuleRelativePath", "Public/NiagaraComponentPool.h" },
		{ "ToolTip", "Collection of all currently allocated, free items ready to be grabbed for use.\nTODO: Change this to a FIFO queue to get better usage. May need to make this whole class behave similar to TCircularQueue." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FreeElements_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FreeElements;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNCPool>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNCPool_Statics::NewProp_FreeElements_Inner = { "FreeElements", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNCPoolElement, METADATA_PARAMS(0, nullptr) }; // 490478184
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNCPool_Statics::NewProp_FreeElements = { "FreeElements", nullptr, (EPropertyFlags)0x0010008000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNCPool, FreeElements), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FreeElements_MetaData), NewProp_FreeElements_MetaData) }; // 490478184
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNCPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNCPool_Statics::NewProp_FreeElements_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNCPool_Statics::NewProp_FreeElements,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNCPool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNCPool_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NCPool",
	Z_Construct_UScriptStruct_FNCPool_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNCPool_Statics::PropPointers),
	sizeof(FNCPool),
	alignof(FNCPool),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNCPool_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNCPool_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNCPool()
{
	if (!Z_Registration_Info_UScriptStruct_NCPool.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NCPool.InnerSingleton, Z_Construct_UScriptStruct_FNCPool_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NCPool.InnerSingleton;
}
// End ScriptStruct FNCPool

// Begin Class UNiagaraComponentPool
void UNiagaraComponentPool::StaticRegisterNativesUNiagaraComponentPool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraComponentPool);
UClass* Z_Construct_UClass_UNiagaraComponentPool_NoRegister()
{
	return UNiagaraComponentPool::StaticClass();
}
struct Z_Construct_UClass_UNiagaraComponentPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraComponentPool.h" },
		{ "ModuleRelativePath", "Public/NiagaraComponentPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldParticleSystemPools_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraComponentPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldParticleSystemPools_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldParticleSystemPools_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_WorldParticleSystemPools;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraComponentPool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraComponentPool_Statics::NewProp_WorldParticleSystemPools_ValueProp = { "WorldParticleSystemPools", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FNCPool, METADATA_PARAMS(0, nullptr) }; // 1000346401
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraComponentPool_Statics::NewProp_WorldParticleSystemPools_Key_KeyProp = { "WorldParticleSystemPools_Key", nullptr, (EPropertyFlags)0x0004008000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraComponentPool_Statics::NewProp_WorldParticleSystemPools = { "WorldParticleSystemPools", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraComponentPool, WorldParticleSystemPools), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldParticleSystemPools_MetaData), NewProp_WorldParticleSystemPools_MetaData) }; // 1000346401
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraComponentPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentPool_Statics::NewProp_WorldParticleSystemPools_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentPool_Statics::NewProp_WorldParticleSystemPools_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentPool_Statics::NewProp_WorldParticleSystemPools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentPool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraComponentPool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentPool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraComponentPool_Statics::ClassParams = {
	&UNiagaraComponentPool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraComponentPool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentPool_Statics::PropPointers),
	0,
	0x008800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentPool_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraComponentPool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraComponentPool()
{
	if (!Z_Registration_Info_UClass_UNiagaraComponentPool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraComponentPool.OuterSingleton, Z_Construct_UClass_UNiagaraComponentPool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraComponentPool.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraComponentPool>()
{
	return UNiagaraComponentPool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraComponentPool);
// End Class UNiagaraComponentPool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentPool_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNCPoolElement::StaticStruct, Z_Construct_UScriptStruct_FNCPoolElement_Statics::NewStructOps, TEXT("NCPoolElement"), &Z_Registration_Info_UScriptStruct_NCPoolElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNCPoolElement), 490478184U) },
		{ FNCPool::StaticStruct, Z_Construct_UScriptStruct_FNCPool_Statics::NewStructOps, TEXT("NCPool"), &Z_Registration_Info_UScriptStruct_NCPool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNCPool), 1000346401U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraComponentPool, UNiagaraComponentPool::StaticClass, TEXT("UNiagaraComponentPool"), &Z_Registration_Info_UClass_UNiagaraComponentPool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraComponentPool), 319668639U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentPool_h_3299665634(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentPool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentPool_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentPool_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentPool_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
