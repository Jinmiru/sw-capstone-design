// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceSpriteRendererInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceSpriteRendererInfo() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSpriteRendererProperties_NoRegister();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraDataInterfaceSpriteRendererInfo
void UNiagaraDataInterfaceSpriteRendererInfo::StaticRegisterNativesUNiagaraDataInterfaceSpriteRendererInfo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceSpriteRendererInfo);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo_NoRegister()
{
	return UNiagaraDataInterfaceSpriteRendererInfo::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Sprite Particles" },
		{ "Comment", "/** This Data Interface can be used to query information about the sprite renderers of an emitter */" },
		{ "DisplayName", "Sprite Renderer Info" },
		{ "IncludePath", "NiagaraDataInterfaceSpriteRendererInfo.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSpriteRendererInfo.h" },
		{ "ToolTip", "This Data Interface can be used to query information about the sprite renderers of an emitter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteRenderer_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** The name of the sprite renderer */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSpriteRendererInfo.h" },
		{ "ToolTip", "The name of the sprite renderer" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteRenderer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceSpriteRendererInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo_Statics::NewProp_SpriteRenderer = { "SpriteRenderer", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSpriteRendererInfo, SpriteRenderer), Z_Construct_UClass_UNiagaraSpriteRendererProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteRenderer_MetaData), NewProp_SpriteRenderer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo_Statics::NewProp_SpriteRenderer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo_Statics::ClassParams = {
	&UNiagaraDataInterfaceSpriteRendererInfo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo_Statics::PropPointers),
	0,
	0x000830A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceSpriteRendererInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceSpriteRendererInfo.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceSpriteRendererInfo.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceSpriteRendererInfo>()
{
	return UNiagaraDataInterfaceSpriteRendererInfo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceSpriteRendererInfo);
UNiagaraDataInterfaceSpriteRendererInfo::~UNiagaraDataInterfaceSpriteRendererInfo() {}
// End Class UNiagaraDataInterfaceSpriteRendererInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSpriteRendererInfo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo, UNiagaraDataInterfaceSpriteRendererInfo::StaticClass, TEXT("UNiagaraDataInterfaceSpriteRendererInfo"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceSpriteRendererInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceSpriteRendererInfo), 904073735U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSpriteRendererInfo_h_3878612788(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSpriteRendererInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSpriteRendererInfo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
