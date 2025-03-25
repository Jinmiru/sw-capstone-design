// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceParticleRead.h"
#include "Niagara/Public/NiagaraDataInterfaceEmitterBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceParticleRead() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceParticleRead();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceParticleRead_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceRWBase();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraDataInterfaceParticleRead
void UNiagaraDataInterfaceParticleRead::StaticRegisterNativesUNiagaraDataInterfaceParticleRead()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceParticleRead);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceParticleRead_NoRegister()
{
	return UNiagaraDataInterfaceParticleRead::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceParticleRead_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "ParticleRead" },
		{ "DisplayName", "Particle Attribute Reader" },
		{ "IncludePath", "NiagaraDataInterfaceParticleRead.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceParticleRead.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmitterBinding_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** Selects which emitter the data interface will bind to, i.e the emitter we are contained within or a named emitter. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceParticleRead.h" },
		{ "ToolTip", "Selects which emitter the data interface will bind to, i.e the emitter we are contained within or a named emitter." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmitterName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceParticleRead.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterBinding;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_EmitterName;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceParticleRead>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceParticleRead_Statics::NewProp_EmitterBinding = { "EmitterBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceParticleRead, EmitterBinding), Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmitterBinding_MetaData), NewProp_EmitterBinding_MetaData) }; // 3055691361
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceParticleRead_Statics::NewProp_EmitterName = { "EmitterName", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceParticleRead, EmitterName_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmitterName_MetaData), NewProp_EmitterName_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceParticleRead_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceParticleRead_Statics::NewProp_EmitterBinding,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceParticleRead_Statics::NewProp_EmitterName,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceParticleRead_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceParticleRead_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceRWBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceParticleRead_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceParticleRead_Statics::ClassParams = {
	&UNiagaraDataInterfaceParticleRead::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfaceParticleRead_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceParticleRead_Statics::PropPointers),
	0,
	0x000830A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceParticleRead_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceParticleRead_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceParticleRead()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceParticleRead.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceParticleRead.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceParticleRead_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceParticleRead.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceParticleRead>()
{
	return UNiagaraDataInterfaceParticleRead::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceParticleRead);
UNiagaraDataInterfaceParticleRead::~UNiagaraDataInterfaceParticleRead() {}
// End Class UNiagaraDataInterfaceParticleRead

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceParticleRead_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceParticleRead, UNiagaraDataInterfaceParticleRead::StaticClass, TEXT("UNiagaraDataInterfaceParticleRead"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceParticleRead, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceParticleRead), 1482460053U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceParticleRead_h_3897741593(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceParticleRead_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceParticleRead_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
