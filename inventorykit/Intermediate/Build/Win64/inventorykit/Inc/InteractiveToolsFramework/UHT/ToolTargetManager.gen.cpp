// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/ToolTargetManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolTargetManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolTargetFactory_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolTargetManager();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolTargetManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UToolTargetManager
void UToolTargetManager::StaticRegisterNativesUToolTargetManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToolTargetManager);
UClass* Z_Construct_UClass_UToolTargetManager_NoRegister()
{
	return UToolTargetManager::StaticClass();
}
struct Z_Construct_UClass_UToolTargetManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The tool target manager converts input objects into tool targets- objects that\n * can expose various interfaces that tools need to operate on them.\n *\n * Someday, the tool target manager may implement caching of targets.\n * \n * See the class comment for UToolTarget for more info.\n */" },
		{ "IncludePath", "ToolTargetManager.h" },
		{ "ModuleRelativePath", "Public/ToolTargetManager.h" },
		{ "ToolTip", "The tool target manager converts input objects into tool targets- objects that\ncan expose various interfaces that tools need to operate on them.\n\nSomeday, the tool target manager may implement caching of targets.\n\nSee the class comment for UToolTarget for more info." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Factories_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolTargetManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Factories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Factories;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolTargetManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UToolTargetManager_Statics::NewProp_Factories_Inner = { "Factories", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UToolTargetFactory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UToolTargetManager_Statics::NewProp_Factories = { "Factories", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UToolTargetManager, Factories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Factories_MetaData), NewProp_Factories_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UToolTargetManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolTargetManager_Statics::NewProp_Factories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolTargetManager_Statics::NewProp_Factories,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToolTargetManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UToolTargetManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToolTargetManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UToolTargetManager_Statics::ClassParams = {
	&UToolTargetManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UToolTargetManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UToolTargetManager_Statics::PropPointers),
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToolTargetManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UToolTargetManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UToolTargetManager()
{
	if (!Z_Registration_Info_UClass_UToolTargetManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToolTargetManager.OuterSingleton, Z_Construct_UClass_UToolTargetManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UToolTargetManager.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UToolTargetManager>()
{
	return UToolTargetManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UToolTargetManager);
UToolTargetManager::~UToolTargetManager() {}
// End Class UToolTargetManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargetManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UToolTargetManager, UToolTargetManager::StaticClass, TEXT("UToolTargetManager"), &Z_Registration_Info_UClass_UToolTargetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToolTargetManager), 242594486U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargetManager_h_3292316270(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargetManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargetManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
