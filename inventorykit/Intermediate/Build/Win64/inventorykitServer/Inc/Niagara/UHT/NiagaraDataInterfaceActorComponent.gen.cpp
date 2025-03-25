// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/DataInterface/NiagaraDataInterfaceActorComponent.h"
#include "Niagara/Public/NiagaraCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceActorComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceActorComponent();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_NoRegister();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENDIActorComponentSourceMode();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Enum ENDIActorComponentSourceMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENDIActorComponentSourceMode;
static UEnum* ENDIActorComponentSourceMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENDIActorComponentSourceMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENDIActorComponentSourceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENDIActorComponentSourceMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENDIActorComponentSourceMode"));
	}
	return Z_Registration_Info_UEnum_ENDIActorComponentSourceMode.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENDIActorComponentSourceMode>()
{
	return ENDIActorComponentSourceMode_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENDIActorComponentSourceMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AttachParent.Comment", "/**\n\x09We will first look at the attach parent.\n\x09If this is not valid we fallback to the Default binding mode.\n\x09*/" },
		{ "AttachParent.Name", "ENDIActorComponentSourceMode::AttachParent" },
		{ "AttachParent.ToolTip", "We will first look at the attach parent.\nIf this is not valid we fallback to the Default binding mode." },
		{ "Default.Comment", "/**\n\x09The default binding mode first we look for a valid binding on the ActorOrComponentParameter.\n\x09If this it no valid we then look at the SourceActor.\n\x09If these both fail we are bound to nothing.\n\x09*/" },
		{ "Default.Name", "ENDIActorComponentSourceMode::Default" },
		{ "Default.ToolTip", "The default binding mode first we look for a valid binding on the ActorOrComponentParameter.\nIf this it no valid we then look at the SourceActor.\nIf these both fail we are bound to nothing." },
		{ "LocalPlayer.Comment", "/**\n\x09We will look for a ULocalPlayer with the provided index.\n\x09If this is not valid we fallback to the Default binding mode.\n\x09*/" },
		{ "LocalPlayer.Name", "ENDIActorComponentSourceMode::LocalPlayer" },
		{ "LocalPlayer.ToolTip", "We will look for a ULocalPlayer with the provided index.\nIf this is not valid we fallback to the Default binding mode." },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceActorComponent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENDIActorComponentSourceMode::Default", (int64)ENDIActorComponentSourceMode::Default },
		{ "ENDIActorComponentSourceMode::AttachParent", (int64)ENDIActorComponentSourceMode::AttachParent },
		{ "ENDIActorComponentSourceMode::LocalPlayer", (int64)ENDIActorComponentSourceMode::LocalPlayer },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENDIActorComponentSourceMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENDIActorComponentSourceMode",
	"ENDIActorComponentSourceMode",
	Z_Construct_UEnum_Niagara_ENDIActorComponentSourceMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDIActorComponentSourceMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDIActorComponentSourceMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENDIActorComponentSourceMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENDIActorComponentSourceMode()
{
	if (!Z_Registration_Info_UEnum_ENDIActorComponentSourceMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENDIActorComponentSourceMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENDIActorComponentSourceMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENDIActorComponentSourceMode.InnerSingleton;
}
// End Enum ENDIActorComponentSourceMode

// Begin Class UNiagaraDataInterfaceActorComponent
void UNiagaraDataInterfaceActorComponent::StaticRegisterNativesUNiagaraDataInterfaceActorComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceActorComponent);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_NoRegister()
{
	return UNiagaraDataInterfaceActorComponent::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/**\nData interface that gives you access to actor & component information.\n*/" },
		{ "DisplayName", "Actor Component Interface" },
		{ "IncludePath", "DataInterface/NiagaraDataInterfaceActorComponent.h" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceActorComponent.h" },
		{ "ToolTip", "Data interface that gives you access to actor & component information." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMode_MetaData[] = {
		{ "Category", "ActorComponent" },
		{ "Comment", "/** Controls how we find the actor / component we want to bind to. */" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceActorComponent.h" },
		{ "ToolTip", "Controls how we find the actor / component we want to bind to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalPlayerIndex_MetaData[] = {
		{ "Category", "ActorComponent" },
		{ "Comment", "//, EditConditionHides))\n" },
		{ "EditCondition", "SourceMode==ENDIActorComponentSourceMode::LocalPlayer" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceActorComponent.h" },
		{ "ToolTip", ", EditConditionHides))" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceActor_MetaData[] = {
		{ "Category", "ActorComponent" },
		{ "Comment", "/** Optional source actor to use, if the user parameter binding is valid this will be ignored. */" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceActorComponent.h" },
		{ "ToolTip", "Optional source actor to use, if the user parameter binding is valid this will be ignored." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorOrComponentParameter_MetaData[] = {
		{ "Category", "ActorComponent" },
		{ "Comment", "/** User parameter binding to use, overrides SourceActor.  Can be set by Blueprint, etc. */" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceActorComponent.h" },
		{ "ToolTip", "User parameter binding to use, overrides SourceActor.  Can be set by Blueprint, etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequireCurrentFrameData_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** When this option is disabled, we use the previous frame's data for the skeletal mesh and can often issue the simulation early. This greatly\n\x09reduces overhead and allows the game thread to run faster, but comes at a tradeoff if the dependencies might leave gaps or other visual artifacts.*/" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceActorComponent.h" },
		{ "ToolTip", "When this option is disabled, we use the previous frame's data for the skeletal mesh and can often issue the simulation early. This greatly\n      reduces overhead and allows the game thread to run faster, but comes at a tradeoff if the dependencies might leave gaps or other visual artifacts." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocalPlayerIndex;
	static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_SourceActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorOrComponentParameter;
	static void NewProp_bRequireCurrentFrameData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireCurrentFrameData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceActorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_SourceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_SourceMode = { "SourceMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceActorComponent, SourceMode), Z_Construct_UEnum_Niagara_ENDIActorComponentSourceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMode_MetaData), NewProp_SourceMode_MetaData) }; // 100546018
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_LocalPlayerIndex = { "LocalPlayerIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceActorComponent, LocalPlayerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalPlayerIndex_MetaData), NewProp_LocalPlayerIndex_MetaData) };
const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_SourceActor = { "SourceActor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceActorComponent, SourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceActor_MetaData), NewProp_SourceActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_ActorOrComponentParameter = { "ActorOrComponentParameter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceActorComponent, ActorOrComponentParameter), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorOrComponentParameter_MetaData), NewProp_ActorOrComponentParameter_MetaData) }; // 174428838
void Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_bRequireCurrentFrameData_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceActorComponent*)Obj)->bRequireCurrentFrameData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_bRequireCurrentFrameData = { "bRequireCurrentFrameData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceActorComponent), &Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_bRequireCurrentFrameData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequireCurrentFrameData_MetaData), NewProp_bRequireCurrentFrameData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_SourceMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_SourceMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_LocalPlayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_SourceActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_ActorOrComponentParameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::NewProp_bRequireCurrentFrameData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::ClassParams = {
	&UNiagaraDataInterfaceActorComponent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::PropPointers),
	0,
	0x000830A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceActorComponent()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceActorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceActorComponent.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceActorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceActorComponent.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceActorComponent>()
{
	return UNiagaraDataInterfaceActorComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceActorComponent);
UNiagaraDataInterfaceActorComponent::~UNiagaraDataInterfaceActorComponent() {}
// End Class UNiagaraDataInterfaceActorComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceActorComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENDIActorComponentSourceMode_StaticEnum, TEXT("ENDIActorComponentSourceMode"), &Z_Registration_Info_UEnum_ENDIActorComponentSourceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 100546018U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceActorComponent, UNiagaraDataInterfaceActorComponent::StaticClass, TEXT("UNiagaraDataInterfaceActorComponent"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceActorComponent), 3798302250U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceActorComponent_h_1075475655(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceActorComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceActorComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceActorComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
