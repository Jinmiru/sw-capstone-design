// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/Stateless/NiagaraStatelessModule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_NoRegister();
NIAGARACORE_API UClass* Z_Construct_UClass_UNiagaraMergeable();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraStatelessModule
void UNiagaraStatelessModule::StaticRegisterNativesUNiagaraStatelessModule()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStatelessModule);
UClass* Z_Construct_UClass_UNiagaraStatelessModule_NoRegister()
{
	return UNiagaraStatelessModule::StaticClass();
}
struct Z_Construct_UClass_UNiagaraStatelessModule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "Stateless/NiagaraStatelessModule.h" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessModule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bModuleEnabled_MetaData[] = {
		{ "Category", "Parameters" },
		{ "DisplayPriority", "0" },
		{ "HideInStack", "" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessModule.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugDrawEnabled_MetaData[] = {
		{ "Category", "Parameters" },
		{ "DisplayPriority", "0" },
		{ "HideInStack", "" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessModule.h" },
		{ "StackItemHeaderIcon", "Icons.Visibility" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static void NewProp_bModuleEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bModuleEnabled;
#if WITH_EDITORONLY_DATA
	static void NewProp_bDebugDrawEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugDrawEnabled;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStatelessModule>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNiagaraStatelessModule_Statics::NewProp_bModuleEnabled_SetBit(void* Obj)
{
	((UNiagaraStatelessModule*)Obj)->bModuleEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_Statics::NewProp_bModuleEnabled = { "bModuleEnabled", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraStatelessModule), &Z_Construct_UClass_UNiagaraStatelessModule_Statics::NewProp_bModuleEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bModuleEnabled_MetaData), NewProp_bModuleEnabled_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UNiagaraStatelessModule_Statics::NewProp_bDebugDrawEnabled_SetBit(void* Obj)
{
	((UNiagaraStatelessModule*)Obj)->bDebugDrawEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_Statics::NewProp_bDebugDrawEnabled = { "bDebugDrawEnabled", nullptr, (EPropertyFlags)0x0020080800002001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraStatelessModule), &Z_Construct_UClass_UNiagaraStatelessModule_Statics::NewProp_bDebugDrawEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugDrawEnabled_MetaData), NewProp_bDebugDrawEnabled_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStatelessModule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_Statics::NewProp_bModuleEnabled,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_Statics::NewProp_bDebugDrawEnabled,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraStatelessModule_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraMergeable,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStatelessModule_Statics::ClassParams = {
	&UNiagaraStatelessModule::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraStatelessModule_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_Statics::PropPointers),
	0,
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraStatelessModule_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraStatelessModule()
{
	if (!Z_Registration_Info_UClass_UNiagaraStatelessModule.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStatelessModule.OuterSingleton, Z_Construct_UClass_UNiagaraStatelessModule_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraStatelessModule.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraStatelessModule>()
{
	return UNiagaraStatelessModule::StaticClass();
}
UNiagaraStatelessModule::UNiagaraStatelessModule() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStatelessModule);
UNiagaraStatelessModule::~UNiagaraStatelessModule() {}
// End Class UNiagaraStatelessModule

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessModule_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStatelessModule, UNiagaraStatelessModule::StaticClass, TEXT("UNiagaraStatelessModule"), &Z_Registration_Info_UClass_UNiagaraStatelessModule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStatelessModule), 3454888061U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessModule_h_804546451(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessModule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessModule_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
