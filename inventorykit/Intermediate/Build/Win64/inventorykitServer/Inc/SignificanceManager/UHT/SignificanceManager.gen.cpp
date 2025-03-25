// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SignificanceManager/Public/SignificanceManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSignificanceManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
SIGNIFICANCEMANAGER_API UClass* Z_Construct_UClass_USignificanceManager();
SIGNIFICANCEMANAGER_API UClass* Z_Construct_UClass_USignificanceManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_SignificanceManager();
// End Cross Module References

// Begin Class USignificanceManager
void USignificanceManager::StaticRegisterNativesUSignificanceManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USignificanceManager);
UClass* Z_Construct_UClass_USignificanceManager_NoRegister()
{
	return USignificanceManager::StaticClass();
}
struct Z_Construct_UClass_USignificanceManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/* The significance manager provides a framework for registering objects by tag to each have a significance\n * value calculated from which a game specific subclass and game logic can make decisions about what level\n * of detail objects should be at, tick frequency, whether to spawn effects, and other such functionality\n *\n * Each object that is registered must have a corresponding unregister event or else a dangling Object reference will\n * be left resulting in an eventual crash once the Object has been garbage collected.\n *\n * Each user of the significance manager is expected to call the Update function from the appropriate location in the\n * game code.  GameViewportClient::Tick may often serve as a good place to do this.\n */" },
		{ "IncludePath", "SignificanceManager.h" },
		{ "ModuleRelativePath", "Public/SignificanceManager.h" },
		{ "ToolTip", "The significance manager provides a framework for registering objects by tag to each have a significance\n* value calculated from which a game specific subclass and game logic can make decisions about what level\n* of detail objects should be at, tick frequency, whether to spawn effects, and other such functionality\n*\n* Each object that is registered must have a corresponding unregister event or else a dangling Object reference will\n* be left resulting in an eventual crash once the Object has been garbage collected.\n*\n* Each user of the significance manager is expected to call the Update function from the appropriate location in the\n* game code.  GameViewportClient::Tick may often serve as a good place to do this." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SignificanceManagerClassName_MetaData[] = {
		{ "Category", "DefaultClasses" },
		{ "Comment", "// Game specific significance class to instantiate\n" },
		{ "DisplayName", "Significance Manager Class" },
		{ "MetaClass", "/Script/SignificanceManager.SignificanceManager" },
		{ "ModuleRelativePath", "Public/SignificanceManager.h" },
		{ "ToolTip", "Game specific significance class to instantiate" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SignificanceManagerClassName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USignificanceManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USignificanceManager_Statics::NewProp_SignificanceManagerClassName = { "SignificanceManagerClassName", nullptr, (EPropertyFlags)0x0040000002044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USignificanceManager, SignificanceManagerClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SignificanceManagerClassName_MetaData), NewProp_SignificanceManagerClassName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USignificanceManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USignificanceManager_Statics::NewProp_SignificanceManagerClassName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USignificanceManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USignificanceManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SignificanceManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USignificanceManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USignificanceManager_Statics::ClassParams = {
	&USignificanceManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USignificanceManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USignificanceManager_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USignificanceManager_Statics::Class_MetaDataParams), Z_Construct_UClass_USignificanceManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USignificanceManager()
{
	if (!Z_Registration_Info_UClass_USignificanceManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USignificanceManager.OuterSingleton, Z_Construct_UClass_USignificanceManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USignificanceManager.OuterSingleton;
}
template<> SIGNIFICANCEMANAGER_API UClass* StaticClass<USignificanceManager>()
{
	return USignificanceManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USignificanceManager);
USignificanceManager::~USignificanceManager() {}
// End Class USignificanceManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SignificanceManager_Source_SignificanceManager_Public_SignificanceManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USignificanceManager, USignificanceManager::StaticClass, TEXT("USignificanceManager"), &Z_Registration_Info_UClass_USignificanceManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USignificanceManager), 1264415952U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SignificanceManager_Source_SignificanceManager_Public_SignificanceManager_h_2631322661(TEXT("/Script/SignificanceManager"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SignificanceManager_Source_SignificanceManager_Public_SignificanceManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SignificanceManager_Source_SignificanceManager_Public_SignificanceManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
