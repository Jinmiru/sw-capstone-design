// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/DataStream/DataStreamManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataStreamManager() {}

// Begin Cross Module References
IRISCORE_API UClass* Z_Construct_UClass_UDataStream();
IRISCORE_API UClass* Z_Construct_UClass_UDataStreamManager();
IRISCORE_API UClass* Z_Construct_UClass_UDataStreamManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin Class UDataStreamManager
void UDataStreamManager::StaticRegisterNativesUDataStreamManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataStreamManager);
UClass* Z_Construct_UClass_UDataStreamManager_NoRegister()
{
	return UDataStreamManager::StaticClass();
}
struct Z_Construct_UClass_UDataStreamManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The DataStreamManager contains all active DataStreams that may serialize data.\n * Calls to the DataStream interface functions will be forwarded to active streams.\n * Which streams will be automatically created or allowed to be manually created\n * need to be configured via UDataStreamDefinitions.\n */" },
		{ "IncludePath", "Iris/DataStream/DataStreamManager.h" },
		{ "ModuleRelativePath", "Public/Iris/DataStream/DataStreamManager.h" },
		{ "ToolTip", "The DataStreamManager contains all active DataStreams that may serialize data.\nCalls to the DataStream interface functions will be forwarded to active streams.\nWhich streams will be automatically created or allowed to be manually created\nneed to be configured via UDataStreamDefinitions." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataStreamManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDataStreamManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataStream,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataStreamManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataStreamManager_Statics::ClassParams = {
	&UDataStreamManager::StaticClass,
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
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataStreamManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataStreamManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataStreamManager()
{
	if (!Z_Registration_Info_UClass_UDataStreamManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataStreamManager.OuterSingleton, Z_Construct_UClass_UDataStreamManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataStreamManager.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UDataStreamManager>()
{
	return UDataStreamManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataStreamManager);
// End Class UDataStreamManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_DataStream_DataStreamManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataStreamManager, UDataStreamManager::StaticClass, TEXT("UDataStreamManager"), &Z_Registration_Info_UClass_UDataStreamManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataStreamManager), 893494464U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_DataStream_DataStreamManager_h_4172059901(TEXT("/Script/IrisCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_DataStream_DataStreamManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_DataStream_DataStreamManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
