// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/ModularRigRuleManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularRigRuleManager() {}

// Begin Cross Module References
CONTROLRIG_API UClass* Z_Construct_UClass_UModularRigRuleManager();
CONTROLRIG_API UClass* Z_Construct_UClass_UModularRigRuleManager_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin Class UModularRigRuleManager
void UModularRigRuleManager::StaticRegisterNativesUModularRigRuleManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModularRigRuleManager);
UClass* Z_Construct_UClass_UModularRigRuleManager_NoRegister()
{
	return UModularRigRuleManager::StaticClass();
}
struct Z_Construct_UClass_UModularRigRuleManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// A management class to validate rules and pattern match\n" },
		{ "IncludePath", "ModularRigRuleManager.h" },
		{ "ModuleRelativePath", "Public/ModularRigRuleManager.h" },
		{ "ToolTip", "A management class to validate rules and pattern match" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularRigRuleManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UModularRigRuleManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularRigRuleManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModularRigRuleManager_Statics::ClassParams = {
	&UModularRigRuleManager::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModularRigRuleManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UModularRigRuleManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModularRigRuleManager()
{
	if (!Z_Registration_Info_UClass_UModularRigRuleManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularRigRuleManager.OuterSingleton, Z_Construct_UClass_UModularRigRuleManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularRigRuleManager.OuterSingleton;
}
template<> CONTROLRIG_API UClass* StaticClass<UModularRigRuleManager>()
{
	return UModularRigRuleManager::StaticClass();
}
UModularRigRuleManager::UModularRigRuleManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModularRigRuleManager);
UModularRigRuleManager::~UModularRigRuleManager() {}
// End Class UModularRigRuleManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigRuleManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularRigRuleManager, UModularRigRuleManager::StaticClass, TEXT("UModularRigRuleManager"), &Z_Registration_Info_UClass_UModularRigRuleManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularRigRuleManager), 3404681184U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigRuleManager_h_756462135(TEXT("/Script/ControlRig"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigRuleManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigRuleManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
