// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentSelector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationSystemConfig() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
ENGINE_API UClass* Z_Construct_UClass_UNavigationSystemConfig();
ENGINE_API UClass* Z_Construct_UClass_UNavigationSystemConfig_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UNullNavSysConfig();
ENGINE_API UClass* Z_Construct_UClass_UNullNavSysConfig_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAgentSelector();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UNavigationSystemConfig
void UNavigationSystemConfig::StaticRegisterNativesUNavigationSystemConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavigationSystemConfig);
UClass* Z_Construct_UClass_UNavigationSystemConfig_NoRegister()
{
	return UNavigationSystemConfig::StaticClass();
}
struct Z_Construct_UClass_UNavigationSystemConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Generic Navigation System Config" },
		{ "IncludePath", "AI/NavigationSystemConfig.h" },
		{ "ModuleRelativePath", "Classes/AI/NavigationSystemConfig.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavigationSystemClass_MetaData[] = {
		{ "Category", "Navigation" },
		{ "MetaClass", "/Script/Engine.NavigationSystemBase" },
		{ "ModuleRelativePath", "Classes/AI/NavigationSystemConfig.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SupportedAgentsMask_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** NavigationSystem's properties in Project Settings define all possible supported agents,\n\x09 *\x09""but a specific navigation system can choose to support only a subset of agents.*/" },
		{ "ModuleRelativePath", "Classes/AI/NavigationSystemConfig.h" },
		{ "ToolTip", "NavigationSystem's properties in Project Settings define all possible supported agents,\n    but a specific navigation system can choose to support only a subset of agents." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAgentName_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** If not None indicates which of navigation datas and supported agents are \n\x09 * going to be used as the default ones. If navigation agent of this type does \n\x09 * not exist or is not enabled then the first available nav data will be used \n\x09 * as the default one */" },
		{ "ModuleRelativePath", "Classes/AI/NavigationSystemConfig.h" },
		{ "ToolTip", "If not None indicates which of navigation datas and supported agents are\ngoing to be used as the default ones. If navigation agent of this type does\nnot exist or is not enabled then the first available nav data will be used\nas the default one" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsOverriden_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** If true it means the navigation system settings are overridden from another source (like a NavConfigOverrideActor) */" },
		{ "ModuleRelativePath", "Classes/AI/NavigationSystemConfig.h" },
		{ "ToolTip", "If true it means the navigation system settings are overridden from another source (like a NavConfigOverrideActor)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NavigationSystemClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SupportedAgentsMask;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultAgentName;
	static void NewProp_bIsOverriden_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOverriden;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationSystemConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_NavigationSystemClass = { "NavigationSystemClass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationSystemConfig, NavigationSystemClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavigationSystemClass_MetaData), NewProp_NavigationSystemClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_SupportedAgentsMask = { "SupportedAgentsMask", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationSystemConfig, SupportedAgentsMask), Z_Construct_UScriptStruct_FNavAgentSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SupportedAgentsMask_MetaData), NewProp_SupportedAgentsMask_MetaData) }; // 1400047301
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_DefaultAgentName = { "DefaultAgentName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationSystemConfig, DefaultAgentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAgentName_MetaData), NewProp_DefaultAgentName_MetaData) };
void Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_bIsOverriden_SetBit(void* Obj)
{
	((UNavigationSystemConfig*)Obj)->bIsOverriden = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_bIsOverriden = { "bIsOverriden", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNavigationSystemConfig), &Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_bIsOverriden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsOverriden_MetaData), NewProp_bIsOverriden_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavigationSystemConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_NavigationSystemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_SupportedAgentsMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_DefaultAgentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_bIsOverriden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNavigationSystemConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavigationSystemConfig_Statics::ClassParams = {
	&UNavigationSystemConfig::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNavigationSystemConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemConfig_Statics::PropPointers),
	0,
	0x000830A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavigationSystemConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavigationSystemConfig()
{
	if (!Z_Registration_Info_UClass_UNavigationSystemConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavigationSystemConfig.OuterSingleton, Z_Construct_UClass_UNavigationSystemConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavigationSystemConfig.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UNavigationSystemConfig>()
{
	return UNavigationSystemConfig::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationSystemConfig);
UNavigationSystemConfig::~UNavigationSystemConfig() {}
// End Class UNavigationSystemConfig

// Begin Class UNullNavSysConfig
void UNullNavSysConfig::StaticRegisterNativesUNullNavSysConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNullNavSysConfig);
UClass* Z_Construct_UClass_UNullNavSysConfig_NoRegister()
{
	return UNullNavSysConfig::StaticClass();
}
struct Z_Construct_UClass_UNullNavSysConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/NavigationSystemConfig.h" },
		{ "ModuleRelativePath", "Classes/AI/NavigationSystemConfig.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNullNavSysConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNullNavSysConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNavigationSystemConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNullNavSysConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNullNavSysConfig_Statics::ClassParams = {
	&UNullNavSysConfig::StaticClass,
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
	0x000830A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNullNavSysConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UNullNavSysConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNullNavSysConfig()
{
	if (!Z_Registration_Info_UClass_UNullNavSysConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNullNavSysConfig.OuterSingleton, Z_Construct_UClass_UNullNavSysConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNullNavSysConfig.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UNullNavSysConfig>()
{
	return UNullNavSysConfig::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNullNavSysConfig);
UNullNavSysConfig::~UNullNavSysConfig() {}
// End Class UNullNavSysConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavigationSystemConfig, UNavigationSystemConfig::StaticClass, TEXT("UNavigationSystemConfig"), &Z_Registration_Info_UClass_UNavigationSystemConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavigationSystemConfig), 2447568093U) },
		{ Z_Construct_UClass_UNullNavSysConfig, UNullNavSysConfig::StaticClass, TEXT("UNullNavSysConfig"), &Z_Registration_Info_UClass_UNullNavSysConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNullNavSysConfig), 2964689248U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_3766824560(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
