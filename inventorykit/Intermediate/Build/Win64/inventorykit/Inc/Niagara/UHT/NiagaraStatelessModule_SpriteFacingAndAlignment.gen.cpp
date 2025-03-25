// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/Stateless/Modules/NiagaraStatelessModule_SpriteFacingAndAlignment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_SpriteFacingAndAlignment() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment_NoRegister();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraStatelessModule_SpriteFacingAndAlignment
void UNiagaraStatelessModule_SpriteFacingAndAlignment::StaticRegisterNativesUNiagaraStatelessModule_SpriteFacingAndAlignment()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStatelessModule_SpriteFacingAndAlignment);
UClass* Z_Construct_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment_NoRegister()
{
	return UNiagaraStatelessModule_SpriteFacingAndAlignment::StaticClass();
}
struct Z_Construct_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Sprite Facing Alignment" },
		{ "IncludePath", "Stateless/Modules/NiagaraStatelessModule_SpriteFacingAndAlignment.h" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_SpriteFacingAndAlignment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSpriteFacingEnabled_MetaData[] = {
		{ "Category", "Parameters" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_SpriteFacingAndAlignment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSpriteAlignmentEnabled_MetaData[] = {
		{ "Category", "Parameters" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_SpriteFacingAndAlignment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteFacing_MetaData[] = {
		{ "Category", "Parameters" },
		{ "EditCondition", "bSpriteFacingEnabled" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_SpriteFacingAndAlignment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteAlignment_MetaData[] = {
		{ "Category", "Parameters" },
		{ "EditCondition", "bSpriteAlignmentEnabled" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_SpriteFacingAndAlignment.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSpriteFacingEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpriteFacingEnabled;
	static void NewProp_bSpriteAlignmentEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpriteAlignmentEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpriteFacing;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpriteAlignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStatelessModule_SpriteFacingAndAlignment>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment_Statics::NewProp_bSpriteFacingEnabled_SetBit(void* Obj)
{
	((UNiagaraStatelessModule_SpriteFacingAndAlignment*)Obj)->bSpriteFacingEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment_Statics::NewProp_bSpriteFacingEnabled = { "bSpriteFacingEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraStatelessModule_SpriteFacingAndAlignment), &Z_Construct_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment_Statics::NewProp_bSpriteFacingEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSpriteFacingEnabled_MetaData), NewProp_bSpriteFacingEnabled_MetaData) };
void Z_Construct_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment_Statics::NewProp_bSpriteAlignmentEnabled_SetBit(void* Obj)
{
	((UNiagaraStatelessModule_SpriteFacingAndAlignment*)Obj)->bSpriteAlignmentEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment_Statics::NewProp_bSpriteAlignmentEnabled = { "bSpriteAlignmentEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraStatelessModule_SpriteFacingAndAlignment), &Z_Construct_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment_Statics::NewProp_bSpriteAlignmentEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSpriteAlignmentEnabled_MetaData), NewProp_bSpriteAlignmentEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment_Statics::NewProp_SpriteFacing = { "SpriteFacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_SpriteFacingAndAlignment, SpriteFacing), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteFacing_MetaData), NewProp_SpriteFacing_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment_Statics::NewProp_SpriteAlignment = { "SpriteAlignment", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_SpriteFacingAndAlignment, SpriteAlignment), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteAlignment_MetaData), NewProp_SpriteAlignment_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment_Statics::NewProp_bSpriteFacingEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment_Statics::NewProp_bSpriteAlignmentEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment_Statics::NewProp_SpriteFacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment_Statics::NewProp_SpriteAlignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraStatelessModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment_Statics::ClassParams = {
	&UNiagaraStatelessModule_SpriteFacingAndAlignment::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment()
{
	if (!Z_Registration_Info_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment.OuterSingleton, Z_Construct_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraStatelessModule_SpriteFacingAndAlignment>()
{
	return UNiagaraStatelessModule_SpriteFacingAndAlignment::StaticClass();
}
UNiagaraStatelessModule_SpriteFacingAndAlignment::UNiagaraStatelessModule_SpriteFacingAndAlignment() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStatelessModule_SpriteFacingAndAlignment);
UNiagaraStatelessModule_SpriteFacingAndAlignment::~UNiagaraStatelessModule_SpriteFacingAndAlignment() {}
// End Class UNiagaraStatelessModule_SpriteFacingAndAlignment

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SpriteFacingAndAlignment_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment, UNiagaraStatelessModule_SpriteFacingAndAlignment::StaticClass, TEXT("UNiagaraStatelessModule_SpriteFacingAndAlignment"), &Z_Registration_Info_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStatelessModule_SpriteFacingAndAlignment), 1214967921U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SpriteFacingAndAlignment_h_2625219680(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SpriteFacingAndAlignment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SpriteFacingAndAlignment_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
