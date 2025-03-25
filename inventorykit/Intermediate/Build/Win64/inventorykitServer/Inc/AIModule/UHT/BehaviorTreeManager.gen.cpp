// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorTreeManager() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeManager();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeManager_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTCompositeNode_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin ScriptStruct FBehaviorTreeTemplateInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BehaviorTreeTemplateInfo;
class UScriptStruct* FBehaviorTreeTemplateInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BehaviorTreeTemplateInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BehaviorTreeTemplateInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("BehaviorTreeTemplateInfo"));
	}
	return Z_Registration_Info_UScriptStruct_BehaviorTreeTemplateInfo.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FBehaviorTreeTemplateInfo>()
{
	return FBehaviorTreeTemplateInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[] = {
		{ "Comment", "/** behavior tree asset */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeManager.h" },
		{ "ToolTip", "behavior tree asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Template_MetaData[] = {
		{ "Comment", "/** initialized template */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeManager.h" },
		{ "ToolTip", "initialized template" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Template;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBehaviorTreeTemplateInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBehaviorTreeTemplateInfo, Asset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Asset_MetaData), NewProp_Asset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::NewProp_Template = { "Template", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBehaviorTreeTemplateInfo, Template), Z_Construct_UClass_UBTCompositeNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Template_MetaData), NewProp_Template_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::NewProp_Asset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::NewProp_Template,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	&NewStructOps,
	"BehaviorTreeTemplateInfo",
	Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::PropPointers),
	sizeof(FBehaviorTreeTemplateInfo),
	alignof(FBehaviorTreeTemplateInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo()
{
	if (!Z_Registration_Info_UScriptStruct_BehaviorTreeTemplateInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BehaviorTreeTemplateInfo.InnerSingleton, Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BehaviorTreeTemplateInfo.InnerSingleton;
}
// End ScriptStruct FBehaviorTreeTemplateInfo

// Begin Class UBehaviorTreeManager
void UBehaviorTreeManager::StaticRegisterNativesUBehaviorTreeManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviorTreeManager);
UClass* Z_Construct_UClass_UBehaviorTreeManager_NoRegister()
{
	return UBehaviorTreeManager::StaticClass();
}
struct Z_Construct_UClass_UBehaviorTreeManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/BehaviorTreeManager.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDebuggerSteps_MetaData[] = {
		{ "Comment", "/** limit for recording execution steps for debugger */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeManager.h" },
		{ "ToolTip", "limit for recording execution steps for debugger" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadedTemplates_MetaData[] = {
		{ "Comment", "/** initialized tree templates */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeManager.h" },
		{ "ToolTip", "initialized tree templates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDebuggerSteps;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoadedTemplates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LoadedTemplates;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviorTreeManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_MaxDebuggerSteps = { "MaxDebuggerSteps", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviorTreeManager, MaxDebuggerSteps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDebuggerSteps_MetaData), NewProp_MaxDebuggerSteps_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_LoadedTemplates_Inner = { "LoadedTemplates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo, METADATA_PARAMS(0, nullptr) }; // 2817503760
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_LoadedTemplates = { "LoadedTemplates", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviorTreeManager, LoadedTemplates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadedTemplates_MetaData), NewProp_LoadedTemplates_MetaData) }; // 2817503760
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_ActiveComponents_Inner = { "ActiveComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_ActiveComponents = { "ActiveComponents", nullptr, (EPropertyFlags)0x0124088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviorTreeManager, ActiveComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveComponents_MetaData), NewProp_ActiveComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviorTreeManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_MaxDebuggerSteps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_LoadedTemplates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_LoadedTemplates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_ActiveComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_ActiveComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBehaviorTreeManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviorTreeManager_Statics::ClassParams = {
	&UBehaviorTreeManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBehaviorTreeManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeManager_Statics::PropPointers),
	0,
	0x008800ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviorTreeManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviorTreeManager()
{
	if (!Z_Registration_Info_UClass_UBehaviorTreeManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviorTreeManager.OuterSingleton, Z_Construct_UClass_UBehaviorTreeManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviorTreeManager.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBehaviorTreeManager>()
{
	return UBehaviorTreeManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviorTreeManager);
UBehaviorTreeManager::~UBehaviorTreeManager() {}
// End Class UBehaviorTreeManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBehaviorTreeTemplateInfo::StaticStruct, Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::NewStructOps, TEXT("BehaviorTreeTemplateInfo"), &Z_Registration_Info_UScriptStruct_BehaviorTreeTemplateInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBehaviorTreeTemplateInfo), 2817503760U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBehaviorTreeManager, UBehaviorTreeManager::StaticClass, TEXT("UBehaviorTreeManager"), &Z_Registration_Info_UClass_UBehaviorTreeManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviorTreeManager), 267796595U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_1903534808(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
