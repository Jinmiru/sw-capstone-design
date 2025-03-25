// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraCullProxyComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraCullProxyComponent() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraCullProxyComponent();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraCullProxyComponent_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCulledComponentInfo();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin ScriptStruct FNiagaraCulledComponentInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraCulledComponentInfo;
class UScriptStruct* FNiagaraCulledComponentInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraCulledComponentInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraCulledComponentInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraCulledComponentInfo, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraCulledComponentInfo"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraCulledComponentInfo.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraCulledComponentInfo>()
{
	return FNiagaraCulledComponentInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraCulledComponentInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Info on a culled Niagara Component for use by it's cull proxy. */" },
		{ "ModuleRelativePath", "Public/NiagaraCullProxyComponent.h" },
		{ "ToolTip", "Info on a culled Niagara Component for use by it's cull proxy." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraCulledComponentInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraCulledComponentInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraCulledComponentInfo",
	nullptr,
	0,
	sizeof(FNiagaraCulledComponentInfo),
	alignof(FNiagaraCulledComponentInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCulledComponentInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraCulledComponentInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCulledComponentInfo()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraCulledComponentInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraCulledComponentInfo.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraCulledComponentInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraCulledComponentInfo.InnerSingleton;
}
// End ScriptStruct FNiagaraCulledComponentInfo

// Begin Class UNiagaraCullProxyComponent
void UNiagaraCullProxyComponent::StaticRegisterNativesUNiagaraCullProxyComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraCullProxyComponent);
UClass* Z_Construct_UClass_UNiagaraCullProxyComponent_NoRegister()
{
	return UNiagaraCullProxyComponent::StaticClass();
}
struct Z_Construct_UClass_UNiagaraCullProxyComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\nA specialization of UNiagaraComponent that can act as a proxy for many other NiagaraComponents that have been culled by scalability. \n*/" },
		{ "HideCategories", "Object Physics Collision Mobility VirtualTexture" },
		{ "IncludePath", "NiagaraCullProxyComponent.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/NiagaraCullProxyComponent.h" },
		{ "ToolTip", "A specialization of UNiagaraComponent that can act as a proxy for many other NiagaraComponents that have been culled by scalability." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instances_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Array of additional instance transforms. This component will be rendered at it's own transform and additionally at each of these transforms. */" },
		{ "ModuleRelativePath", "Public/NiagaraCullProxyComponent.h" },
		{ "ToolTip", "Array of additional instance transforms. This component will be rendered at it's own transform and additionally at each of these transforms." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Instances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Instances;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraCullProxyComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraCullProxyComponent_Statics::NewProp_Instances_Inner = { "Instances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraCulledComponentInfo, METADATA_PARAMS(0, nullptr) }; // 3198856
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraCullProxyComponent_Statics::NewProp_Instances = { "Instances", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraCullProxyComponent, Instances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instances_MetaData), NewProp_Instances_MetaData) }; // 3198856
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraCullProxyComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraCullProxyComponent_Statics::NewProp_Instances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraCullProxyComponent_Statics::NewProp_Instances,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraCullProxyComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraCullProxyComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraCullProxyComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraCullProxyComponent_Statics::ClassParams = {
	&UNiagaraCullProxyComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraCullProxyComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraCullProxyComponent_Statics::PropPointers),
	0,
	0x00A010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraCullProxyComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraCullProxyComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraCullProxyComponent()
{
	if (!Z_Registration_Info_UClass_UNiagaraCullProxyComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraCullProxyComponent.OuterSingleton, Z_Construct_UClass_UNiagaraCullProxyComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraCullProxyComponent.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraCullProxyComponent>()
{
	return UNiagaraCullProxyComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraCullProxyComponent);
UNiagaraCullProxyComponent::~UNiagaraCullProxyComponent() {}
// End Class UNiagaraCullProxyComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCullProxyComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraCulledComponentInfo::StaticStruct, Z_Construct_UScriptStruct_FNiagaraCulledComponentInfo_Statics::NewStructOps, TEXT("NiagaraCulledComponentInfo"), &Z_Registration_Info_UScriptStruct_NiagaraCulledComponentInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraCulledComponentInfo), 3198856U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraCullProxyComponent, UNiagaraCullProxyComponent::StaticClass, TEXT("UNiagaraCullProxyComponent"), &Z_Registration_Info_UClass_UNiagaraCullProxyComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraCullProxyComponent), 2515959322U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCullProxyComponent_h_3372722284(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCullProxyComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCullProxyComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCullProxyComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCullProxyComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
