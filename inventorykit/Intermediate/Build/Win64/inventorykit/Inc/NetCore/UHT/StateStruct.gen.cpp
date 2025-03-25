// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Net/Core/Public/Net/Core/Connection/StateStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateStruct() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NETCORE_API UClass* Z_Construct_UClass_UStatePerObjectConfig();
NETCORE_API UClass* Z_Construct_UClass_UStatePerObjectConfig_NoRegister();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FStateStruct();
UPackage* Z_Construct_UPackage__Script_NetCore();
// End Cross Module References

// Begin ScriptStruct FStateStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateStruct;
class UScriptStruct* FStateStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateStruct, (UObject*)Z_Construct_UPackage__Script_NetCore(), TEXT("StateStruct"));
	}
	return Z_Registration_Info_UScriptStruct_StateStruct.OuterSingleton;
}
template<> NETCORE_API UScriptStruct* StaticStruct<FStateStruct>()
{
	return FStateStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base struct used for states, which is subclassed to define/implement custom states.\n */" },
		{ "ModuleRelativePath", "Public/Net/Core/Connection/StateStruct.h" },
		{ "ToolTip", "Base struct used for states, which is subclassed to define/implement custom states." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[] = {
		{ "Comment", "/** The name of the state this config section represents (valid/usable during InitConfigDefaults) */" },
		{ "ModuleRelativePath", "Public/Net/Core/Connection/StateStruct.h" },
		{ "ToolTip", "The name of the state this config section represents (valid/usable during InitConfigDefaults)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StateName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStateStruct_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateStruct, StateName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateName_MetaData), NewProp_StateName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateStruct_Statics::NewProp_StateName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NetCore,
	nullptr,
	&NewStructOps,
	"StateStruct",
	Z_Construct_UScriptStruct_FStateStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateStruct_Statics::PropPointers),
	sizeof(FStateStruct),
	alignof(FStateStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateStruct.InnerSingleton, Z_Construct_UScriptStruct_FStateStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateStruct.InnerSingleton;
}
// End ScriptStruct FStateStruct

// Begin Class UStatePerObjectConfig
void UStatePerObjectConfig::StaticRegisterNativesUStatePerObjectConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStatePerObjectConfig);
UClass* Z_Construct_UClass_UStatePerObjectConfig_NoRegister()
{
	return UStatePerObjectConfig::StaticClass();
}
struct Z_Construct_UClass_UStatePerObjectConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for loading and initializing state configuration\n */" },
		{ "IncludePath", "Net/Core/Connection/StateStruct.h" },
		{ "ModuleRelativePath", "Public/Net/Core/Connection/StateStruct.h" },
		{ "ToolTip", "Base class for loading and initializing state configuration" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerObjectConfigSection_MetaData[] = {
		{ "Comment", "/** Overrides the config section name, using the CDO */" },
		{ "ModuleRelativePath", "Public/Net/Core/Connection/StateStruct.h" },
		{ "ToolTip", "Overrides the config section name, using the CDO" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Comment", "/** Whether or not this state configuration instance is enabled (states will not load, if not) */" },
		{ "ModuleRelativePath", "Public/Net/Core/Connection/StateStruct.h" },
		{ "ToolTip", "Whether or not this state configuration instance is enabled (states will not load, if not)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PerObjectConfigSection;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatePerObjectConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStatePerObjectConfig_Statics::NewProp_PerObjectConfigSection = { "PerObjectConfigSection", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatePerObjectConfig, PerObjectConfigSection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerObjectConfigSection_MetaData), NewProp_PerObjectConfigSection_MetaData) };
void Z_Construct_UClass_UStatePerObjectConfig_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((UStatePerObjectConfig*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStatePerObjectConfig_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStatePerObjectConfig), &Z_Construct_UClass_UStatePerObjectConfig_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatePerObjectConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatePerObjectConfig_Statics::NewProp_PerObjectConfigSection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatePerObjectConfig_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatePerObjectConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStatePerObjectConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NetCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatePerObjectConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatePerObjectConfig_Statics::ClassParams = {
	&UStatePerObjectConfig::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UStatePerObjectConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStatePerObjectConfig_Statics::PropPointers),
	0,
	0x000804A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatePerObjectConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UStatePerObjectConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStatePerObjectConfig()
{
	if (!Z_Registration_Info_UClass_UStatePerObjectConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatePerObjectConfig.OuterSingleton, Z_Construct_UClass_UStatePerObjectConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStatePerObjectConfig.OuterSingleton;
}
template<> NETCORE_API UClass* StaticClass<UStatePerObjectConfig>()
{
	return UStatePerObjectConfig::StaticClass();
}
UStatePerObjectConfig::UStatePerObjectConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStatePerObjectConfig);
UStatePerObjectConfig::~UStatePerObjectConfig() {}
// End Class UStatePerObjectConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStateStruct::StaticStruct, Z_Construct_UScriptStruct_FStateStruct_Statics::NewStructOps, TEXT("StateStruct"), &Z_Registration_Info_UScriptStruct_StateStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateStruct), 1712902908U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatePerObjectConfig, UStatePerObjectConfig::StaticClass, TEXT("UStatePerObjectConfig"), &Z_Registration_Info_UClass_UStatePerObjectConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatePerObjectConfig), 1369229565U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_404380135(TEXT("/Script/NetCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
