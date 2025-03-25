// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraDataInterfacePhysicsAsset.h"
#include "Niagara/Public/NiagaraCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfacePhysicsAsset() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPhysicsAssetDICollectorInterface();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPhysicsAssetDICollectorInterface_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraDataInterfacePhysicsAsset
void UNiagaraDataInterfacePhysicsAsset::StaticRegisterNativesUNiagaraDataInterfacePhysicsAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfacePhysicsAsset);
UClass* Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_NoRegister()
{
	return UNiagaraDataInterfacePhysicsAsset::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Data Interface for interacting with PhysicsAssets */" },
		{ "DisplayName", "Physics Asset" },
		{ "IncludePath", "NiagaraDataInterfacePhysicsAsset.h" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfacePhysicsAsset.h" },
		{ "ToolTip", "Data Interface for interacting with PhysicsAssets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSource_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Skeletal Mesh from which the Physics Asset will be found. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfacePhysicsAsset.h" },
		{ "ToolTip", "Skeletal Mesh from which the Physics Asset will be found." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftSourceActor_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** The source actor from which to sample */" },
		{ "DisplayName", "Source Actor" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfacePhysicsAsset.h" },
		{ "ToolTip", "The source actor from which to sample" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraDataInterfacePhysicsAsset.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshUserParameter_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Reference to a user parameter if we're reading one. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfacePhysicsAsset.h" },
		{ "ToolTip", "Reference to a user parameter if we're reading one." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultSource;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftSourceActor;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceActor;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshUserParameter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfacePhysicsAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::NewProp_DefaultSource = { "DefaultSource", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfacePhysicsAsset, DefaultSource), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSource_MetaData), NewProp_DefaultSource_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::NewProp_SoftSourceActor = { "SoftSourceActor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfacePhysicsAsset, SoftSourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftSourceActor_MetaData), NewProp_SoftSourceActor_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::NewProp_SourceActor = { "SourceActor", nullptr, (EPropertyFlags)0x0114000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfacePhysicsAsset, SourceActor_DEPRECATED), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceActor_MetaData), NewProp_SourceActor_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::NewProp_MeshUserParameter = { "MeshUserParameter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfacePhysicsAsset, MeshUserParameter), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshUserParameter_MetaData), NewProp_MeshUserParameter_MetaData) }; // 174428838
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::NewProp_DefaultSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::NewProp_SoftSourceActor,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::NewProp_SourceActor,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::NewProp_MeshUserParameter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::ClassParams = {
	&UNiagaraDataInterfacePhysicsAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::PropPointers),
	0,
	0x000830A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfacePhysicsAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfacePhysicsAsset.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfacePhysicsAsset.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfacePhysicsAsset>()
{
	return UNiagaraDataInterfacePhysicsAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfacePhysicsAsset);
UNiagaraDataInterfacePhysicsAsset::~UNiagaraDataInterfacePhysicsAsset() {}
// End Class UNiagaraDataInterfacePhysicsAsset

// Begin Interface UNiagaraPhysicsAssetDICollectorInterface
void UNiagaraPhysicsAssetDICollectorInterface::StaticRegisterNativesUNiagaraPhysicsAssetDICollectorInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraPhysicsAssetDICollectorInterface);
UClass* Z_Construct_UClass_UNiagaraPhysicsAssetDICollectorInterface_NoRegister()
{
	return UNiagaraPhysicsAssetDICollectorInterface::StaticClass();
}
struct Z_Construct_UClass_UNiagaraPhysicsAssetDICollectorInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraDataInterfacePhysicsAsset.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INiagaraPhysicsAssetDICollectorInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNiagaraPhysicsAssetDICollectorInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPhysicsAssetDICollectorInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraPhysicsAssetDICollectorInterface_Statics::ClassParams = {
	&UNiagaraPhysicsAssetDICollectorInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPhysicsAssetDICollectorInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraPhysicsAssetDICollectorInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraPhysicsAssetDICollectorInterface()
{
	if (!Z_Registration_Info_UClass_UNiagaraPhysicsAssetDICollectorInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraPhysicsAssetDICollectorInterface.OuterSingleton, Z_Construct_UClass_UNiagaraPhysicsAssetDICollectorInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraPhysicsAssetDICollectorInterface.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraPhysicsAssetDICollectorInterface>()
{
	return UNiagaraPhysicsAssetDICollectorInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraPhysicsAssetDICollectorInterface);
UNiagaraPhysicsAssetDICollectorInterface::~UNiagaraPhysicsAssetDICollectorInterface() {}
// End Interface UNiagaraPhysicsAssetDICollectorInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfacePhysicsAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfacePhysicsAsset, UNiagaraDataInterfacePhysicsAsset::StaticClass, TEXT("UNiagaraDataInterfacePhysicsAsset"), &Z_Registration_Info_UClass_UNiagaraDataInterfacePhysicsAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfacePhysicsAsset), 4237150205U) },
		{ Z_Construct_UClass_UNiagaraPhysicsAssetDICollectorInterface, UNiagaraPhysicsAssetDICollectorInterface::StaticClass, TEXT("UNiagaraPhysicsAssetDICollectorInterface"), &Z_Registration_Info_UClass_UNiagaraPhysicsAssetDICollectorInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraPhysicsAssetDICollectorInterface), 557137630U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfacePhysicsAsset_h_2766708838(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfacePhysicsAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfacePhysicsAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
