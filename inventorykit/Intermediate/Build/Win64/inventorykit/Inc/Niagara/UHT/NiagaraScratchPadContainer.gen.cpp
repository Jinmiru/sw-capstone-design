// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraScratchPadContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraScratchPadContainer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScratchPadContainer();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScratchPadContainer_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScript_NoRegister();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraScratchPadContainer
void UNiagaraScratchPadContainer::StaticRegisterNativesUNiagaraScratchPadContainer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraScratchPadContainer);
UClass* Z_Construct_UClass_UNiagaraScratchPadContainer_NoRegister()
{
	return UNiagaraScratchPadContainer::StaticClass();
}
struct Z_Construct_UClass_UNiagaraScratchPadContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Wrapper class for scratch pad scripts in an emitter. This is needed because each emitter version can have it's own copy of a scratch pad with the same name and they can't all be outered to the emitter that way.\n */" },
		{ "IncludePath", "NiagaraScratchPadContainer.h" },
		{ "ModuleRelativePath", "Classes/NiagaraScratchPadContainer.h" },
		{ "ToolTip", "Wrapper class for scratch pad scripts in an emitter. This is needed because each emitter version can have it's own copy of a scratch pad with the same name and they can't all be outered to the emitter that way." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scripts_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScratchPadContainer.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Scripts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Scripts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraScratchPadContainer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraScratchPadContainer_Statics::NewProp_Scripts_Inner = { "Scripts", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraScratchPadContainer_Statics::NewProp_Scripts = { "Scripts", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScratchPadContainer, Scripts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scripts_MetaData), NewProp_Scripts_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraScratchPadContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScratchPadContainer_Statics::NewProp_Scripts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScratchPadContainer_Statics::NewProp_Scripts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScratchPadContainer_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UNiagaraScratchPadContainer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScratchPadContainer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraScratchPadContainer_Statics::ClassParams = {
	&UNiagaraScratchPadContainer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UNiagaraScratchPadContainer_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScratchPadContainer_Statics::PropPointers), 0),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScratchPadContainer_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraScratchPadContainer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraScratchPadContainer()
{
	if (!Z_Registration_Info_UClass_UNiagaraScratchPadContainer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraScratchPadContainer.OuterSingleton, Z_Construct_UClass_UNiagaraScratchPadContainer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraScratchPadContainer.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraScratchPadContainer>()
{
	return UNiagaraScratchPadContainer::StaticClass();
}
UNiagaraScratchPadContainer::UNiagaraScratchPadContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraScratchPadContainer);
UNiagaraScratchPadContainer::~UNiagaraScratchPadContainer() {}
// End Class UNiagaraScratchPadContainer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScratchPadContainer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraScratchPadContainer, UNiagaraScratchPadContainer::StaticClass, TEXT("UNiagaraScratchPadContainer"), &Z_Registration_Info_UClass_UNiagaraScratchPadContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraScratchPadContainer), 3193305202U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScratchPadContainer_h_1474552337(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScratchPadContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScratchPadContainer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
